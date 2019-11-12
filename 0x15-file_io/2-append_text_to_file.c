#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 *append_text_to_file - It's a fuction to create files
 *@filename: The path to the file
 *@text_content: The content of the files
 * Return: Always 0.
 */
int append_text_to_file(const char *filename, char *text_content)
{
ssize_t fd, i = 0;
ssize_t w;

if (filename == NULL)
	return (-1);
fd = open(filename, O_APPEND | O_WRONLY);
if (fd == -1)
	return (-1);
if (text_content == NULL)
	return (1);
while (text_content[i] != '\0')
	i++;
w = write(fd, (void *)text_content, i);
if (w == -1)
	return (-1);
close(fd);
return (1);
}
