#include "main.h"

/**
 * _isupper - cheks uppercase
 * @c: parameter
 * Return: 0 if successful
 */

int _isupper(int c)
{
	if (c >= 65 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
