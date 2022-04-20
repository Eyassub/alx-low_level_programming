#include "main.h"
/**
* *_strncat(char *dest, char *src, int n) - concatenates n bytes
* from a string to another
* @dest: string to be added on
* @src: sstring to add
* Return: the pointer to dest
*/
char *_strncat(char *dest, char *src, int n)
{
int i, j;
i = 0;
j = 0;
while (dest[i] != '\0')
i++;
while (src[j] != '\0' && j < n)
{
dest[i] = src[j];
j++;
i++;
}
dest[i] = '\0';
return (dest);
}
