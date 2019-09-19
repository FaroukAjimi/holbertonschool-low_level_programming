#include <stdio.h>
/**
 * main - Entry point
 * Last digits
 * Return: Always 0 (Success)
 */
int main(void)
{
char x;
x = 48;
while (x < 57)
{
putchar(x);
x = x + 1;
putchar(',');
putchar(' ');
}
putchar(57);
return (0);
}
