#include "main.h"
/**
 * print_chessboard -  function that prints the chessboard.
 * @a: char pointer input
 */
void print_chessboard(char (*a)[8])
{
	int i = 0, j;
	char value;
	while (*a[i] != '\0')
	{
		for (j = 0; j < 8; j++)
		{
			value = a[i][j];
			_putchar(value);
		}
		
		_putchar('\n');
		i++;
	}
}
