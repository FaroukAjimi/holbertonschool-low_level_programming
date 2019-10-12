#include <stdio.h>
#include "holberton.h"
int main (int argc, char *argv[])
{
	int count;
	int val1;
	int val2;
	argv[0]="Error";
	if (argc - 1 > 1 && argc - 1 < 3)
	{
		val1= _atoi(argv[1]);
		val2= _atoi(argv[2]);
		for (count = 1; count < argc - 1; count++)
		{
			printf("%d\n", val1*val2);
		}
	}
	else
	{
		printf("Error\n");
		return(1);
	}
}
