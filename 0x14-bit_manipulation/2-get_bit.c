#include "main.h"

/**
 * get_bit 
 * @n: the number
 * @index: The index to get the value at - indices start at 0
 * Return: the value of bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int hold;

	if (index > 64)
		return (-1);

	hold = n >> index;

	return (hold & 1);
}
