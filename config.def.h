/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nogroup";

/* keyboard layout to switch to.
 * set to a negative value to disable keyboard layout switching. */
static int xkblayout = 0;

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#005577",   /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* time in seconds before the monitor shuts down */
static const int monitortime = 5;

/* insert grid pattern with scale 1:1, the size can be changed with logosize */
static const int logosize = 75;

/* grid width and height for right center alignment */
static const int logow = 12;
static const int logoh = 6;

/* blur settings */
#define BLUR /* enable blur */
static const int blurRadius=5;

/* pixelation settings */
// #define PIXELATION /* enable pixelation */
static const int pixelSize=0; /* pixelation radius */

/* change image gamma.
 * a gamma of 1.0 is normal, 2.0 brightens and 0.5 darkens etc. */
static const double gamma = 1.0;

/* change image contrast.
 * a contrast of 1.0 does nothing, 2.0 will double contrast etc. */
static const double contrast = 1.0;

/* change image brightness. a brightness value of 0 does nothing,
 * -1.0 is complete darkness, and 1.0 makes everything white. */
static const double brightness = 0;

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
