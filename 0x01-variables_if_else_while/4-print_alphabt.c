#include <stdio.h>
/**
* main - gives all alphabets in lowercase except e and q
* Return: 0 is a success
*/
int main(void)
{
char ch;
 while (ch = 'a'; <= 'z')
if (ch != 'e' && ch != 'q')
putchar(ch);
ch++;
putchar('\n');
return (0);
}

