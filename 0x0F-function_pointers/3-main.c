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
	int a;
	int b;
	int c;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	int (*op)(int, int) = get_op_func(argv[2]);

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if (op == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if (b == 0 && (op == op_div || op == op_mod))
	{
		printf("Error\n");
		exit(100);
	}
	c = op(a, b);
	printf("%d\n", c);
	return (0);
}
