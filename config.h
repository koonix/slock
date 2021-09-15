/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nobody";

/* specify default colors */
static char col_init[]   = "#000000";  /* after initialization */
static char col_input[]  = "#003300";  /* during input */
static char col_failed[] = "#330000";  /* wrong password */
static char text_color[] = "#aaaaaa";  /* message text */

/* specify colors to read from xresources */
XCOLORS
    XLOAD( col_init,   "*.background" );
    XLOAD( col_input,  "*.color1"     );
    XLOAD( col_failed, "*.background" );
    XLOAD( text_color, "*.foreground" );
XCOLORS_END

static const char *colorname[NUMCOLS] = {
    [INIT]   = col_init,    /* after initialization */
    [INPUT]  = col_input,   /* during input */
    [FAILED] = col_failed,  /* wrong password */
};

/* default message */
static const char * message = "Enter Password, Please!";

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* time in seconds before the monitor shuts down */
static const int monitortime = 10;

/* text size (must be a valid size) */
static const char * font_name = "-uw-ttyp0-medium-r-normal--22-200-75-75-c-110-iso8859-15";
