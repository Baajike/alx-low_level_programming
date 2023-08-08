#include "main.h"

/**
 * append_text_to_file - The file to append
 * @filename: The pointer for the constant file
 * @text_content: The string file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i = 0;
	int tot = 0;
	int res = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (tot = 0; text_content[tot];)
			tot++;
	}

	i = open(filename, O_WRONLY | O_APPEND);
	res = write(i, text_content, tot);

	if (i == -1 || res == -1)
		return (-1);

	close(i);

	return (1);
}

