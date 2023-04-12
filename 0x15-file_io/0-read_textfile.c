#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads and prints a text file to the POSIX stdout.
 *
 * @filename: Points to the name of the file.
 *
 * @letters: The number of letters the
 *           function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         O/w - the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t D, R, I;
	char *cache;

	if (filename == NULL)
		return (0);

	cache = malloc(sizeof(char) * letters);
	if (cache == NULL)
		return (0);

	D = open(filename, O_RDONLY);
	R = read(D, cache, letters);
	I = write(STDOUT_FILENO, cache, R);

	if (D == -1 || R == -1 || I == -1 || I != R)
	{
		free(cache);
		return (0);
	}

	free(cache);
	close(D);

	return (I);
}
