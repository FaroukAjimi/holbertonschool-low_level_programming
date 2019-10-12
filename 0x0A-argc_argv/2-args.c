#include <stdio.h>

int main (int argc, char *argv[])
{
	int count;

	printf ("This program was called with \"%s\".\n",argv[0]);

	if (argc > 1)
	{
		for (count = 1; count < argc; count++)
		{
			printf("%s",  argv[count]);
		}
	}
	else
	{
		printf("The command had no other arguments.\n");
	}

	return 0;
}
