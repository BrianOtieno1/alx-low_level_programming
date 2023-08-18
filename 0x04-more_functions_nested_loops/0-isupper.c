#include "main.h"
/**
 * _isupper - detect upper case alphabets
 *
 * @c: c is an input character
 *
 * Return: (1) if true or (0) for false
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
