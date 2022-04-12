#include "main.h"
/**
* main - gives alphabets in lowercase from a to z
* Return: 0 is a success
*/
void print_alphabet(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
_putchar(ch);
_putchar('\n');
return (0);
}
