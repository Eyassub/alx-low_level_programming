#include <unistd.h>
/**
* main - Prints out without using printf or puts.
* Return: 1 if success.
*/
int main(void)
{
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 8);
return (1);
}
