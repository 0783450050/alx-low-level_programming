#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: Th haracter to print 
 *
 * return: on sucess i
 * on error, -1 is returned, and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
