#include<stdio.h>
/**
*Main - Entry point
*
*Return: Always 0 (success)
*
*/
int main(void);
{
int c;
do {
for (c = 'a'; c <= 'z'; c++)
putchar(c);
} while (c < 'z');
do {
for (c = 'A'; c <= 'Z'; c++)
putchar(c);
} while (c < 'Z');
putchar('\n');
return (0);
}
