#include <unistd.h>
#include <stdlib.h>

int
main(void)
{
	execl("/usr/bin/killall", "killall", "-q", "slock", (char *)NULL);
}
