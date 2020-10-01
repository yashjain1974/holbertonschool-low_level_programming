#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry Point
*
* Return: Alphabet without q and e
*/
int main(void)
{
char c = 'a';
while (c <= 'z')
{
if (c == 'e' || c == 'q')
{
c++;
}
putchar(c);
c++;
if (c > 'z')
{
putchar('\n');
}
}
return (0);
}
