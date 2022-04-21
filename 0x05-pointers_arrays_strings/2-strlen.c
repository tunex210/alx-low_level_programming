#include "main.h"

/**
 * Function that returns the  lenght of a string.
 * str: character
 * len: lenght of string
 *
 * Return: Noting
 */

int _strlen(char *s)

{
	int len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}

