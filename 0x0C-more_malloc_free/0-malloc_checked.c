#include "main.h"
#include <stdlib>
/**
* *malloc_checked - allocates memory using malloc
* @b: memory to allocate
* Return: allocated memory or exit if error
*/
void *malloc_checked(unsigned int b)
{
void *p;
p = malloc(b);
if (p == NULL)
{
return (98);
}
return (p);
}
