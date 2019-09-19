#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 * print size of variables
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
x = x % 10;
if (n > 5)
{
printf("Last digit of %d is %d and is greater thean 5,\n" n, x);
}
if else(n == 0)
{
printf("Last digit of %d is %d and is 0\n" n, x);
}
if else(n < 6)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n" n, x);
}
return (0);
}
