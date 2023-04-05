#include "main.h"

/**
 * _strlen_recursion - function that returns the lenght of a string
 *
 * @s: pointer to char type parameter
 *
 * Return: 0 on Success
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));

	}
	else
	{
		return (0);
	}
}
