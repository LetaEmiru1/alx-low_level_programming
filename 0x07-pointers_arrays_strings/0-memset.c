#include "main.h"
/**
 *_memset- fills the first n bytes of memory area
 *@s: a pointer to a memory area
 *@b: a character that will be added to the memory area
 *@n: number of bytes of memory to be filled
 *Return: a pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
