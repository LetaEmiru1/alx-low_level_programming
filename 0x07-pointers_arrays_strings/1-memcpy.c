#include "main.h"
/**
 *_memcy- copies n bytes from memory area
 *@dest: destination
 *@src: source
 *@n: counter
 *return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
