/* A program for file 2-append_text_to_file.c */

#include "main.h"

/**
 * append_text_to_file - this will always append new text at the end of a file.
 *
 * @filename: this is a file to append the text to.
 * @text_content: this is a content to append into the file.
 *
 * Return: This will Always return 1 on success,
 * Otherwise return -1 if it is failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int wc1 = 0, wc2, fp;

	if (!filename) /* this will not result in an error */
		return (-1);

	fp = open(filename, O_WRONLY | O_APPEND);
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
return (1); /* ends the program */
}
