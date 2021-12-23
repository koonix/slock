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

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 0;

/* time in seconds before the monitor shuts down */
static const int monitortime = 60;
