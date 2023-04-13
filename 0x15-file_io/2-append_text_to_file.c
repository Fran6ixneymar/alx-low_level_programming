#include "main.h"

/**
 * _strlen - Gets the length of a string.
 *
 * @str: Points to the string.
 *
 * Return: length of the string.
 */
size_t _strlen(char *str)
{
	size_t fig;

	for (fig = 0; str[fig]; fig++);
	return (fig);
}


/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: Points to the name of the file.
 * @text_content: String added to the end of the file.
 *
 * Return: -1 If function fails or filename is NULL.
 *         Otherwise - 1 if successful.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int D;
	ssize_t len;

	if (filename == NULL)
		return (-1);
	D = open(filename, O_WRONLY | O_APPEND);
	if (D == -1)
		return (-1);
	if (text_content != NULL)
		len = write(D, text_content, _strlen(text_content));
	close(D);
	if (len == -1)
		return (-1);
	return (1);
}
