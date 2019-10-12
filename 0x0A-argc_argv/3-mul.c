#include <stdio.h>
#include "stdlib.h"
int main(int argc, char *argv[])
{
	int val1;
	int val2;

	argv[0]="0";
	if (argc - 1 > 1 && argc - 1 < 3)
	{
		val1= atoi(argv[1]);
		val2= atoi(argv[2]);
		printf("%d\n", val1*val2);
		return (0);
	}
	else
	{
		printf("Error\n");
		return(1);
	}
}
