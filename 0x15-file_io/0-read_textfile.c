#include "main.h"

/**
 * create_file - creates a file.
 * @filename: pointer to the name of the file to create
 * @text_content: pointer to a string to write to the file
 * Return: 1 (success) Otherwise - 1 (fails)
 */


ssize_t read_textfile(const char *filename, size_t letters)
{
	int op;
	ssize_t re, wri;
	char *buff;

	if (!filename)
		return (0);

	op = open(filename, O_RDONLY);

	if (op == -1)
		return (0);

	buff = malloc(sizeof(char) * (letters));
	if (!buff)
		return (0);

	re = read(op, buff, letters);
	wri = write(STDOUT_FILENO, buff, re);

	close(op);

	free(buff);

	return (wri);
}
