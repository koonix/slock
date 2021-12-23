/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nobody";

/* keyboard layout to switch to.
 * set to a negative value to disable keyboard layout switching. */
static int xkblayout = 0;

static const char *colorname[NUMCOLS] = {
    [INIT]   = "#2f2f2f",    /* after initialization */
    [INPUT]  = "#005577",   /* during input */
    [FAILED] = "#993030",  /* wrong password */
};

/* message */
static const char * message = "Enter Password, Please!";
static const char * font_name = "-uw-ttyp0-medium-r-normal--22-200-75-75-c-110-iso8859-15";
static char text_color[] = "#aaaaaa";

/* time in seconds before the monitor shuts down */
static const int monitortime = 60;

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
