#include "main.h"

/**
 * print_line - prints lines
 * @nTimes: number of times
 *
 * Return: void
 */


void print_line(int nTimes)
{
	int i;

	for (i = 0; i < nTimes; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
