#include "main.h"
#include <stdlib.h>
/**
* *array_range - creates an array of intigers
* @min: the minimum number
* @max: the maximum number
* Returns: pointer to range of an array
*/
int *array_range(int min, int max)
{
int i, l;
int *p;
if (min > max)
return (NULL);
l = max - min + 1;
p = malloc(sizeof(int) * l);
if (p == NULL)
return (NULL);
for (i = 0; i < l; i++; min++)
{
p[i] = min;
}
return (p);
}
