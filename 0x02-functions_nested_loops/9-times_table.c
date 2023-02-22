#include "main.h"

/**
 * times_table - This function prints the times table
 *
 */

void times_table(void)
{
	int i = 0;

	while (i <= 9)
	{
		int j = 0;

		while (j <= 9)
		{
			int multi;

			multi = i * j;
			if (multi / 10 == 0)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(multi + '0');
				if (j != 9)
					_putchar(',');
			}
			else
			{
				int first_digit, last_digit;

				first_digit = multi / 10;
				last_digit = multi % 10;
				_putchar(' ');
				_putchar(first_digit + '0');
				_putchar(last_digit + '0');
				if (j != 9)
					_putchar(',');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
