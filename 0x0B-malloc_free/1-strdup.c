#include "main.h"
#include <stdlib.h>
/**
* _strdup - copy string in a new located memory
* @str: string to be copied
* Return: pointer to duplicated string or NULL if error
*/
char *_strdup(char *str)
{
int i = 0;
char *s;
if (str == NULL)
return (NULL);
while (*str++)
i++;
s = malloc(sizeof(char) * (i + 1));
if (!s)
return (NULL);
for (i++; i--;)
s[i] = *--str;
return (s);
}
