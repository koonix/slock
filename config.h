/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nobody";

/* keyboard layout to switch to.
 * set to a negative value to disable keyboard layout switching. */
static int xkblayout = 0;

static const char *colorname[NUMCOLS] = {
    [INIT]   = "gray", /* after initialization */
    [INPUT]  = "#f5c211", /* during input */
    [FAILED] = "#993030", /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 0;

/* time in seconds before the monitor shuts down */
static const int monitortime = 60;

/* insert grid pattern with scale 1:1, the size can be changed with logosize */
static const int logosize = 40;

/* grid width and height for right center alignment */
static const int logow = 12;
static const int logoh = 10;

/* blur and pixelation of the background image */
#define BLUR
#undef PIXELATION
static const int blurRadius = 10;
static const int pixelSize = 0;

/* change image gamma.
 * a gamma of 1.0 is normal, 2.0 brightens and 0.5 darkens etc. */
static const double gamma = 0.6;

/* change image contrast.
 * a contrast of 1.0 does nothing, 2.0 will double contrast etc. */
static const double contrast = 0.6;

/* change image brightness. a brightness value of 0 does nothing,
 * -1.0 is complete darkness, and 1.0 makes everything white. */
static const double brightness = -0.01;

/* dwm logo rectangles */
static XRectangle rectangles[9] = {
	/* x    y       w       h */
	{ 0,    3,      1,      3 },
	{ 1,    3,      2,      1 },
	{ 0,    5,      8,      1 },
	{ 3,    0,      1,      5 },
	{ 5,    3,      1,      2 },
	{ 7,    3,      1,      2 },
	{ 8,    3,      4,      1 },
	{ 9,    4,      1,      2 },
	{ 11,   4,      1,      2 },
};
