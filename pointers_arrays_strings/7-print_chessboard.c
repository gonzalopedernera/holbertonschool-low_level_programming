#include "main.h"
/**
 * print_chessboard - prints a chessboard
 *
 * @a: chessboard
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;
	int k = 0;

	for (i = 0; i <= 7; i++)
	{
		if (i != 0)
		{
			_putchar ('\n');
		}
		for (j = 0; j <= 7; j++)
		{
			_putchar (a[k][j]);
		}
		k++;
	}
	_putchar ('\n');
}
