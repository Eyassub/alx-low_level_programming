#include <stdio.h>
/**
* main - gives alphabets in lowercase from z to a
* Return: 0 is a success
*/
int main(void)
{
char ch;
for (ch = 'z'; ch <= 'a'; ch--)
putchar(ch);
putchar('\n');
return (0);
}

