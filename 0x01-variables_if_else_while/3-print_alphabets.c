#include <stdio.h>
/**
* main - gives all alphabets in lowercase and uppercase
* Return: 0 is a success
*/
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch);
for (ch = 'A'; ch <= 'Z'; ch++)
putchar(ch);
putchar('\n');
return (0);
}

