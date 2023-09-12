#include "main.h"

/**
 *_isalpha - checks for alphabetic characters
 *@c: input char
 *
 *Return: (1) if c is a lowercase or upper case
 *(0) o/w
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
