#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: input string
 * Return: integer
 */
int _atoi(char *s)
{
	unsigned int count = 0, size = 0, pn = 1, m = 1;
	int result = 0;

	while (*(s + count) != '\0')
	{
		if (size > 0 && (*(s + count) < '0' || *(s + count) > '9'))
			break;

		if (*(s + count) == '-')
			pn *= -1;

		if (*(s + count) >= '0' && *(s + count) <= '9')
		{
			if (size > 0)
				m *= 10;

			result = result * 10 + (*(s + count) - '0');
			size++;
		}
		count++;
	}

	return (result * pn);
}
