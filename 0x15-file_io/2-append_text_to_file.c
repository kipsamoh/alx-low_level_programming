#include "main.h"

/**
 * append_text_to_file - appends texts to the file
 * @filename: name of the file
 * @text_content: text to add.
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int i;
	int writtenfile;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (i = 0; text_content[i]; i++)
			;

		writtenfile = write(fd, text_content, i);

		if (writtenfile == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
