#include "main.h"

/**
 * print_chessboard - function
 * @a: parameter
 */

void print_chessboard(char (*a)[8])
{
	int i = j = 0;

	for (; i < 8; i++)
	{
		for (; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
