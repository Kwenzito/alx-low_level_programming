#include "main.h"

/**
 * print_binary - The function prints the binary representation of a number
 * @n: number to print in binary
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int index = 63, counter = 0, checkbit = 1;
	unsigned long int bit;

	for (; index >= 0; index--)
	{
		bit = n >> index;

		if (checkbit & bit)
		{
			_putchar('1');
			counter++;
		}
		else if (counter)
			_putchar('0');
	}
	if (!counter)
		_putchar('0');
}
