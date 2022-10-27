include "main.h"
/**
 * string_toupper - Changes all lowercase letters of a string to uppercase.
 * @str: The string to be changed.
 * Return: A pointer to the changed string.
 */

char *string_toupper(char *str)
{
	int count = o;

	while (*(s + count) != '\0')
	{
		if ((*(s + count) >= 97) && (*(s  count) <= 122))
			*(s + count) = *(s + count) - 32;
		count++;
	}

	return (s);
}
