#include "holberton.h"
/**
* print_last_digit - print the last digit of a number
* @r: number in var
* Return: Always 0
*/
int print_last_digit(int r)
{
int a  = r % 10;
if (a > 0)
{
_putchar(a + '0');
}
else
{
a = a * -1;
_putchar(a + '0');
}
return (a);
}
