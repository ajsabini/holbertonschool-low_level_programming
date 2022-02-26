#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * wildcmp - saber si es numero primo
 * @s1: 
 * @s2:
 * Return: 1 si es primo, 0 si no es
 */
int wildcmp(char *s1, char *s2)
{
if (s1)
{
	if (s1 == s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	else
	{
		if (*s2 != '*')
		{
			return (0);
		}
		else
		{
			if (s2)
			{
				return (wildcmp(s1, s2 + 1));
			}
			else
			{
				return 0;
			}
		}	
	}
	return (1);
}
return (0);
}
