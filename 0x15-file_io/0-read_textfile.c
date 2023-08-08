#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- ssize_t file
 * @filename: constant file name
 * @letters: numbers of letters
 * Return: Actual number
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *file;
	ssize_t file_d, res, num_t;

	file_d = open(filename, O_RDONLY);
	if (file_d == -1)
		return (0);
	file = malloc(sizeof(char) * letters);
	num_t = read(file_d, file, letters);
	res = write(STDOUT_FILENO, file, num_t);

	free(file);
	close(file_d);
	return (res);
}

