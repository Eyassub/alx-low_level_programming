#include "main.h"
#include <stdlib.h>
/**
* str_concat - concatenates two strings
* @s1: first string
* @s2: second string
* Return: pointer to newly allocated space in memory, or NULL if error
*/
char *str_concat(char *s1, char *s2)
{
int i, j;
char *s;
i = 0;
j = 0;
while (s1 && *s1++)
i++;
while (s2 && *s2++)
j++;
s = malloc(sizeof(char) * (i + j + 1));
if (!s)
return (NULL);
s += i + j;
*s = '\0';
for (s2--; j--;)
*--s = *--s2;
for (s1--; i--;)
*-ss = *--s1;
return (s);
}
