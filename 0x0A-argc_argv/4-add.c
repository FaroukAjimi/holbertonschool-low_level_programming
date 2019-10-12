#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 *main - hello
 *@argc: NUM
 *@argv: array
 *Return: 1 in case of error
 */
int main(int argc, char *argv[])
{
	int count;
	int val1;
	int val;

	argv[0] = "0";
	if (argc - 1 >= 0)
	{
		for (count = 0; count < argc - 1; count++)
		{
			val = atoi(argv[count + 1]);
			val1 = atoi(argv[count]);
			if (isdigit(val) == 0  && count >= 1)
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", val + val1);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

}
