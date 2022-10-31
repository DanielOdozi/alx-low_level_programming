#include "main.h"
#include <string.h>
/**
 * append_text_to_file - To add at the end of a file.
 * @filename: The file.
 * @text_content: NULL terminator.
 * Return: return 1 for succes and -1 for failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i;

	if (!filename)
		return (-1);

	i = open(filename, O_WRONLY | O_APPEND);
	if (i == -1)
		return (-1);

	if (text_content)
		if (write(i, text_content, strlen(text_content)) == -1)
			return (-1);

	close(i);
	return (1);
}
