#include <stdio.h>
/**
 * main - Entry point
 * Last digits
 * Return: Always 0 (Success)
 */
int main(void)
{
char WoW;
WoW = 'a';
while (WoW <= 'z')
{
putchar(WoW);
WoW++;
}
WoW = 'A';
while (WoW <= 'Z')
{
putchar(WoW);
WoW++;
}
putchar('\n');
return (0);
}
