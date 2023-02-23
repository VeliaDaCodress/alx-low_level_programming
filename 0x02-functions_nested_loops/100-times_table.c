#include "main.h"

/**
 * times_table - This function prints the times table
 *
 * @n: the times range
 */

void print_times_table(int n)
{
	if (n < 16 && n > -1)
	{
		int i = 0;

		while (i <= n)
		{
			int j = 0;

			while (j <= n)
			{
				int multi;
				int f_d;
				int s_d;
				int l_d;

				multi = i * j;
				f_d = multi / 100;
				s_d = ((multi / 10) % 10);
				l_d = multi % 10;

				if (f_d == 0 && s_d == 0)
				{
					if (j != 0)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					_putchar(l_d + '0');
				}
				else if (f_d == 0 && s_d != 0)
				{
					if (j != 0)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
					}
					_putchar(s_d + '0');
					_putchar(l_d + '0');
				}
				else
				{
					if (j != 0)
					{
						_putchar(',');
						_putchar(' ');
					}
					_putchar(f_d + '0');
					_putchar(s_d + '0');
					_putchar(l_d + '0');
				}
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
}
