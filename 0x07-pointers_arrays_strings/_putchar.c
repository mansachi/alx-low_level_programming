#include <unistd.h>

/**
 * _putchar - this writes the character c to stdout efficiently.
 * @c: The character to be printed.
 *
 * Return: On Success if it is 1.
 * On error, -1 is to be returned only, and errno is to be set up appropriately and efficiently.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
