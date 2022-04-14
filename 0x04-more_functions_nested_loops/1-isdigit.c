#include "main.h"
/**
* _isdigit - shows digit from 0 to 9
* @c: the number to be checked
* Return: 1 if the number is between 0 & 9 and 0 if not
*/
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
