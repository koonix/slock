#ifdef SLOCK_CONFIG

/* ======================
 * = slock's configs
 * ====================== */

/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nobody";

static const char *colorname[NUMCOLS] = {
	[NORMAL]     = "#001b26", /* background rectangle */
	[BORDER]     = "#004966", /* border */
	[SQUARE]     = "#0076a6", /* inner indicator square */
	[SQUARECAPS] = "#cc3333", /* indicator square when capslock is active */
	[FAIL]       = "#330d0d", /* wrong passowrd background rectangle */
	[FAILBORDER] = "#cc3333", /* wrong password border */
	[OUTLINE]    = "#000000", /* outline around border */
};

/* input indicator dimensions */
static const int indparams[NUMPARAMS] = {
	[WIDTH]       = 300,
	[HEIGHT]      = 35,
	[BORDERPX]    = 5,
	[OUTLINEPX]   = 2,
	[SQUAREGAPPX] = 2,
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 0;

/* turn off the monitor after this many seconds of inactivity */
static const int monitortime = 60;

/* switch to this keyboard layout number after locking
 * and restore the keyboard layout after unlocking.
 * 0 indicates the first (main) keyboard layout.
 * set to a negative value to disable this behaviour. */
static const unsigned int keyboardlt = 0;

#endif
#ifdef SLOCKIMG_CONFIG

/* ======================
 * = slockimg's configs
 * ====================== */

/* size and position of the overlay image */
static const char overlay_size[] = "500x500";
static const char overlay_gravity[] = "northwest";
static const char overlay_coord[] = "+0+0";

/* dimensions to use if they can't be fetched from X */
static const int  fallback_width  = 1920;
static const int  fallback_height = 1080;

/* path to imagemagick's convert utility */
static const char convert_path[] = "/usr/bin/convert";

#endif
