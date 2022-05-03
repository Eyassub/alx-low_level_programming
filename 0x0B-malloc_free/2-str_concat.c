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
while (s1[i] != '\0')
{
i++;
}
while (s2[j] != '\0')
{
s1[i] = s2[j];
j++;
i++;
}
s = malloc(sizeof(char) * (i + j + 1));
if (!s)
return (NULL);
s1[i] = '\0';
return (s1);
}
