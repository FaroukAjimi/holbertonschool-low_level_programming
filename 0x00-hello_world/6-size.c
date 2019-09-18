#include<stdio.h>
#include<conio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
void main(void)
{
clrscr();
printf(“TypettttSize(bytes)”);
printf(“nCharacterttt    % d”, sizeof(char));
printf(“nIntegertttt    % d”, sizeof(int));
printf(“nLong intttt    % d”, sizeof(long int));
printf(“nFloattttt    % d”, sizeof(float));
printf(“nDoubletttt    % d”, sizeof(double));
printf(“nLong doublettt    % d”, sizeof(long double));
getch();
}
