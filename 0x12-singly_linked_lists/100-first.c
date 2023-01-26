#include <stdio.h>

/**
 * _main - print string before
 * the main func excutes
 */

void __attribute__((constructor)) _main(void);

void _main(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
