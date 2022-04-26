#include "main.h"

/**
*_memcpy - a function that copies memory area
*@dest: memory area destination to cpoy
*@src: memory area source to copy from
*@n: number of bytes
*Return: returns pointer to copy
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;
	
	while (n--)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return(p);
}
