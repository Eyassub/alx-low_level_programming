#include "main.h"
/**
* _isupper - shows the character Uppercase Alphabets
* @c: the alphabet to be checked
* Return: 1 if it is uppercase and 0 if not
*/
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
