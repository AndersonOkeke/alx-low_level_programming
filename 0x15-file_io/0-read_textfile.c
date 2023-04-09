#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file prints to the STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: wr- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *f;
	ssize_t fp;
	ssize_t wr;
	ssize_t rd;

	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);
	f = malloc(sizeof(char) * letters);
	rd = read(fp, f, letters);
	wr = write(STDOUT_FILENO, f, rd);

	free(f);
	close(fp);
	return (wr);
}
