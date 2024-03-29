#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
*create_array:a function that creates an array of chars
*
* @size: size of the array
* @c: specific char
* Return: 1 or 0
*/

char *create_array(unsigned int size, char c)
{
	char *a;

	unsigned int i;

	a = (char *) malloc(size * sizeof(c));

	if (a == 0 || size == 0)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}

	return (a);
	free(a);

}
