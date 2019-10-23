#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main - lolllo
 *@argc: num
 *@argv: arr
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int (*op)(int, int)
	int c;
	int a;
	int b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	op = get_op_func(argv[2]);
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if (op == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	c = op(a, b);
	printf("%d\n", c);
	return (0);
}
