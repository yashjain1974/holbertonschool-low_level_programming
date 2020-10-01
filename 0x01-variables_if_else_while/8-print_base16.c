#include <stdio.h>
/**
* main - entry point
*
* Return: Alphabet returns
*/
int main(void)
{
int c;
do {
for (c = 0; c <= 9; c++)
putchar(c + 48);
} while (c < 9);
do {
for (c = 0; c <= 5; c++)
putchar(c + 97);
} while (c > 102);
putchar('\n');
return (0);
}
