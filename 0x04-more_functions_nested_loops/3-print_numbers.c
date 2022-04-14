#include "main.h"
/**
 * print numbers- function that prints numbers 0 to 9
 * followed by a new line
 * Return: Always 0
 */

void print_numbers(void)
	
{

	x='0';

	for (; x <= '9'; x++)
		_putchar(x);
	_putchar('\n');

}
