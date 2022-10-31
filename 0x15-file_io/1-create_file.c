#include "main.h"
#include <string.h>
/**
 * create_file - To create a new file.
 * @filename: The file to be created.
 * @text_content: Terminated string.
 * Return: To return 1 if succes and -1 if fail.
 */
int create_file(const char *filename, char *text_content)
{
	int i;

	if (!filename)
		return (-1);

	i = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (i == -1)
		return (-1);

	if (text_content)
		write(i, text_content, strlen(text_content));

	close(i);
	return (1);
}
