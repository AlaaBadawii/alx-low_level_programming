#include <stdio.h>

void print_something(void) __attribute__ ((constructor));

/**
 * print_something - print something before main executed
 */
void print_something(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
