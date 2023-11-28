/* A program for file 3-cp.c */

#include "main.h"

/**
* print_error - this will print file close error.
* @file_des: this is a file descriptor.
*
* Return: This will Always return None.
*/

void print_error(int file_des)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_des);
	exit(100);
}

/**
* main - this simply copies the content of a file to another file.
* @argc: this is the number of command line arguments.
* @argv: this is an array containing the program command line arguments.
* Return: This will Always return success.
*/

int main(int argc, char *argv[])
{
	int fp_from, fp_to, wc;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97); }
	fp_from = open(argv[1], O_RDONLY);
	if (argv[1] == NULL || fp_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98); }

	fp_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fp_to < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(fp_from);
		exit(99); }
	while ((wc = read(fp_from, buffer, 1024)) > 0)
	{
		if (wc != write(fp_to, buffer, wc))
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fp_from);
			close(fp_to);
			exit(99);
	}}
	if (wc < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98); }
	if (close(fp_from) < 0)
		print_error(fp_from);
	if (close(fp_to) < 0)
		print_error(fp_to);
return (0); /* ends the program */
}
