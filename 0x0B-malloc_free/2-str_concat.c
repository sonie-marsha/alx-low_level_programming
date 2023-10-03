#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *str_concat - concatenates two strings
 *@s1: str 1
 *@s2: str 2
 *
 *Return: a ptr
 */

char *str_concat(char *s1, char *s2)
{
	char *con;
	unsigned int len1 = (s1 != NULL) ? strlen(s1) : 0;
	unsigned int len2 = (s2 != NULL) ? strlen(s2) : 0;
	unsigned int total_len = len1 + len2 + 1;

	con = (char *)malloc(total_len * sizeof(char));
	if (con == NULL)
		return (NULL);

	if (s1 != NULL)
		strcpy(con, s1);
	if (s2 != NULL)
		strcpy(con, s2);

	return (con);
}
