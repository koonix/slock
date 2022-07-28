#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <sys/wait.h>
#include <X11/Xlib.h>

#define SLOCKIMG_CONFIG
#include "config.h"

#define EXEC(cmd, ...) \
	do { \
		pid_t pid; \
		if ((pid = fork()) == 0) { \
			execl(cmd, cmd, __VA_ARGS__, (char *)NULL); \
			exit(0); \
		} \
		if (pid > 0) \
			waitpid(pid, NULL, 0); \
	} while(0)

static void die(const char *errstr, ...);

int
main(int argc, char **argv)
{
	char *img;
	Display *dpy;
	int screen, width, height;
	char resize_geom[32], crop_geom[32];

	img = argv[1];

	if (argc != 2 || access(img, R_OK) != 0)
		die("provide a valid image file.\n");

	if (access(convert_path, X_OK) != 0)
		die("imagemagick (%s) is not installed.\n", convert_path);

	if ((dpy = XOpenDisplay(NULL))) {
		screen = DefaultScreen(dpy);
		width  = DisplayWidth(dpy, screen);
		height = DisplayHeight(dpy, screen);
		XCloseDisplay(dpy);
	} else {
		fprintf(stderr, "cannot open display; using fallback values.\n");
		width  = fallback_width;
		height = fallback_height;
	}

	snprintf(resize_geom, sizeof(resize_geom), "%dx%d^",    width, height);
	snprintf(crop_geom,   sizeof(crop_geom),   "%dx%d+0+0", width, height);

	EXEC(convert_path, img, "-resize", resize_geom, "-gravity", "center", \
		"-crop", crop_geom, "(", "-resize", overlay_size,
		"-gravity", overlay_gravity, "-geometry", overlay_coord,
		OVERLAYIMGPATH, ")", "-composite", IMGPATH);
}

static void
die(const char *errstr, ...)
{
	va_list ap;

	va_start(ap, errstr);
	vfprintf(stderr, errstr, ap);
	va_end(ap);
	exit(1);
}
