#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename == NULL)
	{
		return (0);
	}

	FILE *my_text = fopen(filename, "r");
	if (my_text == NULL)
	{
		return (0);
	}

	char my_array[letters + 1];

	ssize_t read_bytes = fread(my_array, sizeof(char), letters, my_text);
	if (read_bytes <= 0)
	{
		fclose(my_text);
		return (0);
	}

	my_array[reda_bytes] = '\0';
	printf("%s", my_array);

	fclose(my_text);
	return (read_bytes);
}
