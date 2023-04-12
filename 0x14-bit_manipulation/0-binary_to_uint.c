#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 *
 * @b: this contains the string of the binary number (0,1)
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int fig;
	unsigned int num = 0;

	if (!b)
		return (0);

	for (fig = 0; b[fig]; fig++)
	{
		if (b[fig] < '0' || b[fig] > '1')
			return (0);
		num = 2 * num + (b[fig] - '0');
	}

	return (num);
}
