#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - main function
 *
 * Return: always 0
 */
int main(void)
{
	int d, p, q;

	for (d = '0' ; d <= '7' ; d++)
	{
		for (p = d + 1; p <= '8'; p++)
		{
			for (q = p + 1; q <= '9'; q++)
			{
				if ((p != d) && (q != d) && (q != p))
				{
					putchar(d);
					putchar(p);
					putchar(q);
					if (d == '7' && p == '8' && q == '9')
					{
					putchar('\n');
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
return (0);
}
