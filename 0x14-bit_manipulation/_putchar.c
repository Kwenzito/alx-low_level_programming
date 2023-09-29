#include <unistd.h>
/**
 *  _putchar -The function writes the  character...
 *  passed as an argument to stdout
 *  @c: The parameter passed into the function
 *  Return: 1 (Success), -1 (Error)
 */

int  _putchar(char c)
{
	return (write(1, &c, 1));
}
