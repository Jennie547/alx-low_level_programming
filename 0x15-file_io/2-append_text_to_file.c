#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: ptr 1
 * @text_content: ptr 2
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int open_file, write_to, count = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[count] != '\0')
			count++;
	}

	open_file = open(filename, O_WRONLY | O_APPEND);
	write_to = write(open_file, text_content, count);

	if (open_file == -1 || write_to == -1)
		return (-1);

	close(open_file);

	return (1);
}
