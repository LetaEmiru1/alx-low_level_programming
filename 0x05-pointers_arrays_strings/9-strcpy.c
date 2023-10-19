#include <stdio.h>
#include "main.h"
/**
 * _strcpy- takes two inputs and copies content of the one to the other.
 * @dest: the string that src is to be copied to
 * @src: the string that is to be copied
 * return: pointer to the copied content
*/
char *_strcpy(char *dest, char *src)
{
    int len,i = 0;
    while (*(src + len) != '\0')
    {
        len ++;
    }
    len ++;
    for (i = 0; i<len; i++)
    {
        *(dest + i) = *(src+i);
    }
    return dest;
}
