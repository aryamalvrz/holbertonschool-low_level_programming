#include "main.h"

/**
 * *string_toupper - Changes all lowercase letters
 * of a string to uppercase
 *
 *@var: String
 *
 *Return: var
 */

char *string_toupper(char *var)
{
	int index;

	for (index = 0; var[index] != '\0'; index++)
	{
		if (var[index] >= 97 && var[index] <= 122)
			var[index] = var[index] - 32;
	}
	return (var);

}
