#include "main.h"

/**
 * create_file - to create a file.
 * @filename: a pointer
 * @text_content: another pointer
 *
 * Return: return -1 if filename is NULL
 *  create an empty file if text_content is NULL
 */

int create_file(const char *filename, char *text_content)
{
	int x, y, my_len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (my_len = 0; text_content[my_len];)
			my_len++;
	}

	x = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	y = write(x, text_content, my_len);

	if (x == -1 || y == -1)
		return (-1);

	close(x);

	return (1);
}
