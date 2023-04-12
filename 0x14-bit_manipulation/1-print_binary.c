#include "main.h"
/**
 * _power - this calculates the base and power of a given exponent
 *
 * @base: the base of the exponent
 *
 * @pow: the power of the exponent
 *
 * Return: the value of base and power
 */
unsigned long int _power(unsigned int base, unsigned int pow)
{
	unsigned long int fig;
	unsigned int num;

	fig = 1;
	for (num = 1; num <= pow; num++)
		fig *= base;
	return (fig);
}
/**
 * print_binary - prints the binary representation of a number
 *
 * @n: number to print in binary
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int mar, total;
	char sign;

	sign = 0;
	mar = _power(2, sizeof(unsigned long int) * 8 - 1);

	while (mar != 0)
	{
		total = n & mar;
		if (total == mar)
		{
			sign = 1;
			_putchar('1');

		}
		else if (sign == 1 || mar == 1)
		{
			_putchar('0');
		}
		mar >>= 1;
	}
}
