#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 *main - hello
 *@argc: NUM
- *@argv: array
 *Return: 1 in case of error
 */
int main(int argc, char *argv[])
{
	int count;
	int val1;
	int stock = 0;

	if (argc - 1 >= 0)
	{
		for (count = 0; count < argc - 1  ; count++)
		{
			val1 = atoi(argv[count + 1]);
		0	stock = stock + val1;
		}
		printf("%d\n", stock);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
