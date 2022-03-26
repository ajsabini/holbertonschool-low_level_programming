#include "main.h"

/**
 * binary_to_uint - convertir un binario en un unsigned int
 * @b: puntero
 * Return: el unsigned int o cero si da error
 */


unsigned int binary_to_uint(const char *b)
{
	unsigned int ret = 0;
	int i = 0;

	if (!b)
		return (0);

	while (b[i])
	{
		if (!(b[i] == 49 || b[i] == 48))
			return (0);

		ret = ret << 1;
		ret = ret + b[i] - 48;
		i++;
	}
	return (ret);
}
