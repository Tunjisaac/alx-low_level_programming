#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98
 * user input's number prints to 98, regardless < 98 or > 98
 * @p: number input
 * Return: Always 0 (Success)
 */
void print_to_98(int p)
{
	if (p < 98)
	{
		while (p <= 98)
		{
			printf("%d", p);
			if (p != 98)
			{
				printf(", ");
			}
			p++;
		}
	}
	else if (p > 98)
	{
		while (p >= 98)
		{
			printf("%d", p);
			if (p != 98)
			{
				printf(", ");
			}
			p--;
		}
	}
	else
	{
		printf("98");
	}
	printf("\n");
}
