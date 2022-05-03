#include "main.h"
#include <stdlib.h>
/**
* _strdup - copy string in a new located memory
* @str: string to be copied
* Return: pointer to duplicated string or NULL if error
*/
char *_strdup(char *str)
{
unsigned int  i, j;
char s;
if (str == NULL)
return (NULL);
for (i = 0; str[i]; i++)
i++;
s = malloc(sizeof(char));
if (s == NULL)
{
return (NULL);
}
for (j = 0; j < i; j++)
{
s[j] = str[j];
}
return (s);
}
