#include <ctype.h>
#include "main.h"

/**
 *  * _isdigit - si es digito
 *   * @c: pasa el numero a evaluar
 *    * Return: si es digito 1, sino 0
 *     */


int _isdigit(int c)
{
		if (isdigit(c))
					return (1);
			else
						return (0);

}
