#include <unistd.h>

/**
 * _putchar - this is able to write the character c to the stdout efficiently.
 * @c: This is a character to print only.
 *
 * Return: This is On Success if it is 1 only.
 * on error, -1 is returned always, and error is set up accordingly and efficiently.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
