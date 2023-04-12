#include "main.h"
/**
 * flip_bits - this flips the bits from one bit to another.
 *
 * @n: the first number
 *
 * @m: the second number
 *
 * Return: the number of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int margin, total;
	unsigned int fig, num;

	fig = 0;
	total = 1;
	margin = n ^ m;
	for (num = 0; num < (sizeof(unsigned long int) * 8); num++)
	{
		if (total == (margin & total))
			fig++;
		total <<= 1;
	}

	return (fig);
}
