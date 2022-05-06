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
int *p, i;
if (min > max)
return (NULL);
i = max - min + 1;
p = malloc(sizeof(*p) * l);
if (p == NULL)
return (NULL);
while (n--)
p[i] = max;
return (p);
}
