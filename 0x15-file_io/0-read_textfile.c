#include "main.h"

/**
 * read_textfile- print to STDOUT.
 * @filename: the text file to read
 * @letters: how many letters to read
 *
 * Return: the POSIX standard output
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *my_ptr;
	ssize_t a;
	ssize_t b;
	ssize_t c;

	a = open(filename, O_RDONLY);
	if (a == -1)
		return (0);
	my_ptr = malloc(sizeof(char) * letters);
	c = read(a, my_ptr, letters);
	b = write(STDOUT_FILENO, my_ptr, c);

	free(my_ptr);
	close(a);
	return (b);
}
