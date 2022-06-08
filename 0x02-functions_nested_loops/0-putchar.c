#include "main.h"
int main(void)
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
{
	char *sh = "_putchar";

	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	_putchar('\n');

	return (0);
}
