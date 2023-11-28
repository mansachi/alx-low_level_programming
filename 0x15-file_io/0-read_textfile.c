/* A program for file 0-read_textfile.c */

#include "main.h"

/**
 * read_textfile - this will always reads a text file and prints,
 * it to the POSIX standard output.
 *
 * @filename: this is the name of the file to be read.
 * @letters: this is the number of letters to read and print.
 *
 * Return: This will Always return the number of letters printed,
 * Otherwise return 0 if it fails.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int rc, wc; /* whis will read and write character counter only */
	int fp;  /* this is a file descriptor */

	if (!filename)
		return (0);

	fp = open(filename, O_RDONLY);
	if (fp < 0)
		return (0);

	buffer = malloc(letters * sizeof(char));
	if (buffer == NULL)
		return (0);

	rc = read(fp, buffer, letters);
	if (rc < 0)
	{
		free(buffer);
		return (0);
	}
	buffer[rc] = '\0';
	close(fp);

	wc = write(STDOUT_FILENO, buffer, rc);
	free(buffer);

	if (wc < 0)
		return (0);

return (wc); /* this ends the program */
}
