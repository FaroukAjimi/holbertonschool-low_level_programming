#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * read_textfile - check the code for Holberton School students.
 *@filename: ooof
 *@letters: ppppf
 * Return: Always 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *s;
	ssize_t p, w;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	s = malloc(letters * sizeof(char));
	if (s == NULL)
		return (0);
	p = read(fd, s, letters);
	if (p == -1)
		return (0);
	w = write(STDOUT_FILENO, s, p);
	if (w == -1 || p != w)
		return (0);
	close(fd);
	return (w);
}
