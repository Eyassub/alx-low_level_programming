#include <stdio.h>
/**
* main - gives all alphabets in lowercase except e and q
* Return: 0 is a success
*/
int main(void)
{
char ch = 'a';
while (ch <= 'z')
{
if (ch != 'e' && ch != 'q')
{
putchar(ch);
}
ch++;
}
putchar('\n');
return (0);
}
