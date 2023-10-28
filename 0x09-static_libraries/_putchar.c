/**
 * This is a simple _putchar program.
 */

#include <unistd.h>

/**
 * _putchar - this will write the Character c to the stdout library efficiently.
 * @c: this will allow the Character to Print efficiently.
 *
 * Return: This will Always be On Success if it is 1.
 * On error, -1 will be returned, and error is set up efficiently and appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
