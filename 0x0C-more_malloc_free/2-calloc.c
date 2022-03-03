#include <stddef.h>
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: elements
 * @size: bytes elements
 * Return: p
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *p = NULL;

	if ((nmemb != 0) && (size != 0))
	{
		p = malloc(nmemb * size);
		if (p != NULL)
		{
			for (i = 0; i < (nmemb * size); i++)
			{
				p[i] = 0;
			}
		}
	}
	return (p);
}
