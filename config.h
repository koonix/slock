/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nobody";

static const char *colorname[NUMCOLS] = {
    [BACKGROUND] = "#131313", /* after initialization */
    [INIT]   = "#2f2f2f",    /* after initialization */
    [INPUT]  = "#005577",   /* during input */
    [FAILED] = "#993030",  /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* time in seconds before the monitor shuts down */
static const int monitortime = 30;

/* message */
static char text_color[] = "#aaaaaa";
static const char * message = "";
/* set the message font to uw-ttyp0-font. install it from the AUR. */
static const char * font_name = "-uw-ttyp0-medium-r-normal--22-200-75-75-c-110-iso8859-15";

static const int logosize = 20;
/* grid width and height for right center alignment */
static const int logow = 12;
static const int logoh = 16;
static XRectangle rectangles[9] = {
    /* x	y	w	h */
    { 0,	3,	1,	3 },
    { 1,	3,	2,	1 },
    { 0,	5,	8,	1 },
    { 3,	0,	1,	5 },
    { 5,	3,	1,	2 },
    { 7,	3,	1,	2 },
    { 8,	3,	4,	1 },
    { 9,	4,	1,	2 },
    { 11,	4,	1,	2 },
};
