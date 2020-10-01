#include <stdio.h>
/**
* main - entry point
*
* Return: Alphabet returns
*/
int main(void)
{
char c;
do {
for (c = 'z'; c >= 'a'; c--)
putchar(c);
} while (c > 'a');
putchar('\n');
return (0);
}
