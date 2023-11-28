/* A program for file 1-create_file.c */

#include "main.h"

/**
 * create_file - this will always reads a text file and,
 * prints it to the POSIX standard output.
 *
 * @filename: this is a name of the file to be read.
 * @text_content: this is a NULL terminated string to write the file.
 *
 * Return: This will Always 1 on success,
 * Otherwise return -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int wc1 = 0, wc2, fp;

	if (!filename)
		return (-1);

	fp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fp < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[wc1])
			wc1++;

		wc2 = write(fp, text_content, wc1);
		if (wc2 != wc1)
			return (-1);
	}

close(fp);
return (1); /* this ends the program */
}
