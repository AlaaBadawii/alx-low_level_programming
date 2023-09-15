#include "main.h"
/**
 * positive_or_negative - print whether the number is positive or negative.
 *
 * @i: int input
 */
void positive_or_negative(int i)
{

	if (i == 0)
		printf("%d is zero", i);
	else if (i < 0)
		printf("%d is negative", i);
	else
		printf("%d is positive", i);
}
