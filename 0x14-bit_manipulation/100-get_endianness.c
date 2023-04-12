#include "main.h"

/**
 * get_endianness - this checks for size of the endian
 *
 * Return: 0 if big, 1 if little
 */
int get_endianness(void)
{
	unsigned int fig = 1;
	char *c = (char *) &fig;

	return (*c);
}
