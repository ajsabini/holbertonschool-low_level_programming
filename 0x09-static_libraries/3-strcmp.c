#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strcmp - compara string
 * @s1: primer string
 * @s2: segundo string
 * Return: la copia
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int s1_len = strlen(s1);
	int s2_len = strlen(s2);
	int a = s2_len;
	int devolver;

	if (s1_len >= s2_len)
	{
		a = s1_len;
	}

	for (i = 0; i < a; i++)
	{
		if (s1[i] == s2[i])
		{
			devolver = 0;
		}
		else
		{
			devolver = s1[i] - s2[i];
			break;
		}

	}

	return (devolver);
}
