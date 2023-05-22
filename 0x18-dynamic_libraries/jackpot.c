#include <unistd.h>
#include <string.h>

int d_rand()
{
	static int dt = -1;

	dt++;
	if (dt == 0)
		return 8;
	if (dt == 1)
		return 8;
	if (dt == 2)
		return 7;
	if (dt == 3)
		return 9;
	if (dt == 4)
		return 23;
	if (dt == 5)
		return 74;
	return dt * dt % 30000;
}
