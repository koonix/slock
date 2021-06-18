/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nobody";

#if defined __has_include && __has_include ("/tmp/wal-slock.h")
#include "/tmp/wal-slock.h"
#endif
#ifndef PYWAL

/* colors */
static const char *colorname[NUMCOLS] = {
    [INIT] =   "black",     /* after initialization */
    [INPUT] =  "#003300",   /* during input */
    [FAILED] = "#330000",   /* wrong password */
};

/* text color */
static const char * text_color = "#aaaaaa";

#endif

/* default message */
static const char * message = "Enter Password, Please!";

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* time in seconds before the monitor shuts down */
static const int monitortime = 10;

/* text size (must be a valid size) */
static const char * font_name = "-uw-ttyp0-medium-r-normal--22-200-75-75-c-110-iso8859-15";
