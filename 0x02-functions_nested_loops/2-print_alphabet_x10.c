#include "main.h"

/*
 * print - alphabet x10
 * print in lowercase
 */

void print_alphabet_x10(void)
{
	char ii;
	int i;

	i = 0;

	while (i < 10)
	{
		ii = 'a';
		while (ii <= 'z')
		{
			_putchar(ii);
			ii++;
		}
	_putchar('\n');
	i++;
	}
}
