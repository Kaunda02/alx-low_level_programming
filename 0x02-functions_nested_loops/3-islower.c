#include "main.h"

/**
 * _islower - check if a character is lowercase
 *
 * @c: parameter to be printed
 *
 * Rturn: 1 if it is a lower case and 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
