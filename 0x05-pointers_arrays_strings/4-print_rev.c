#include "main.h"
/**
 * print_rev - print a string in reverse
 *
 * @s: the string input to be reversed
 *
 * return: nothing
 */
void print_rev(char *s)
{
	int a;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}
	for (a--; a >= 0; a--)
		putchar(s[a]);
	putchar('\n');
}
