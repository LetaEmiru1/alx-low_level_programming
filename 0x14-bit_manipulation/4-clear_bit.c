#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0.
 * @n: pointer to an unsigned long int.
 * @index: index of the bit.
 *
 * Return: 1 if on success, -1 on failure.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;

	if (*n & m)
		*n ^= m;

	return (1);
}
