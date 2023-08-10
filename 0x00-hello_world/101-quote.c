#include <stdio.h>
#include <unistd.h>

/**
 * main - program that prints a line to a standard error
 *
 * Return: 1 (success)
 */
int main(void)
{
	const char *quote = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"; write(2, quote, 59);
	return (1);
}

