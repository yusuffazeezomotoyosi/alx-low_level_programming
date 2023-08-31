#include "main.h"

/**
 * get_bit 
 * @n: the number
 * @index: The index to get the value at - indices start at 0
 * Return: the value of bit
 */

int get_bit(unsigned long int n, unsigned int i)
{
	if (i > 63)
		return (-1);

	return ((n >> i) & 1);
}
