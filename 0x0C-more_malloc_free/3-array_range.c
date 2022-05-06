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
int *p;
int i,j;
i = max - min + 1;
if (min > max)
return (NULL);
p = malloc(sizeof(*p) * (max - min + 1));
if (p == NULL)
return (NULL);
for (j = 0; j < i; j++)
{
p[j] = min;
min++;
}
return (p);
}
