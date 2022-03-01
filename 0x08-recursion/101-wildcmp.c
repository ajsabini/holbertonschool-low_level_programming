#include <stdio.h>
#include <string.h>

/**
 * wildcmp - comparar dos strings
 * @s1: str 1
 * @s2: str 2
 * Return: 1 o 0
 */

int wildcmp (char *s1, char *s2)
{

	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == '\0' && *s2 == '*')
		return (wildcmp(s1, s2 + 1));
	if (*s1 == '\0' && *s2 != '\0')
		return (0);
	if (*s1 == '\0' && *s2 == '*')
		return (wildcmp(s1, s2 + 1));
	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
			return (wildcmp(s1, s2 + 1));
		if (wildcmp(s1, s2 + 1) != '\0')
			return (1);
		return (wildcmp(s1 + 1, s2));
	}
	return (0);
}
