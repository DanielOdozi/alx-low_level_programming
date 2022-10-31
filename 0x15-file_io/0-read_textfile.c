#include "main.h"
/**
 * read_textfile - to read files.
 * @filename: The file name.
 * @letters: Length of the stringss.
 * Return: returns rean.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int i, rean;
	char *buffer;

	buffer = malloc(sizeof(char *) * letters);

	if (!filename)
		return (0);

	if (!buffer)
		return (0);

	i = open(filename, O_RDONLY, 0600);
	if (i == -1)
		return (0);

	rean = read(i, buffer, letters);
	write(STDOUT_FILENO, buffer, rean);

	free(buffer);
	close(i);
	return (rean);
}
