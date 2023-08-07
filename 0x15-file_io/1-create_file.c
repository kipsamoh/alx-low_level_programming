#include "main.h"

/**
 * create_file - creates new file
 * @filename: name of the file
 * @text_content: content on the file
 *
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int i;
	int writtenfile;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (i = 0; text_content[i]; i++)
		;

	writtenfile = write(fd, text_content, i);

	if (writtenfile == -1)
		return (-1);

	close(fd);

	return (1);
}
