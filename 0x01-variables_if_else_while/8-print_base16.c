#include <stdio.h>
/**
* main - gives all alphabets and nubers
* Return: 0 is a success
*/
int main(void)
{
int n;
char ch;
for (n = '0'; n <= '9'; n++)
putchar(n);
for (ch = 'a'; ch <= 'f'; ch++)
putchar(ch);
putchar('\n');
return (0);
}
