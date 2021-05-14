#include "tests.h"

size_t	test_timeout(const char *s)
{
	(void)s;
	sleep(3);
	return (0);
}
