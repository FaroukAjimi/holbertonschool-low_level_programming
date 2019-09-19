#include <stdio.h>
/**
 * main - Entry point
 * Last digits
 * Return: Always 0 (Success)
 */
int main(void)
{
char x;
x = 'z';
while (x >= 'a')
{
putchar (x);
x = x - 1;
}
putchar('\n');
return (0);
}
