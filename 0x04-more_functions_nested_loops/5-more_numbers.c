#include "main.h"

/**
 * more_numbers - number fact
 *
 * Return: no return
 */

void more_numbers(void)
{

int e, f;
	for (e = 1; e <= 10; e++)
	{
		for (f = 0; f < 15; f++)
		{
			if (f >= 10)
			_putchar('1');
			_putchar(f % 10 + '0');
		}
			_putchar('\n');
		}
}
