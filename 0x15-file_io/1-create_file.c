#include "main.h"

/**
 * create_file - int create file to create
 * your interger files
 * @filename: This is a constant file and pointer
 * @text_content: This  is a constant char string and a pointer
 * Return: -1 if unsuccessful and 1 if successful
 *
 */
int create_file(const char *filename, char *text_content)
{
	int file_d = 0;
	int tot = 0;
	int res = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (tot = 0; text_content[tot];)
			tot++;
	}

	file_d = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	res = write(file_d, text_content, tot);

	if (file_d == -1 || res == -1)
		return (-1);

	close(file_d);

	return (1);
}

