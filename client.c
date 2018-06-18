#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv)
{
	if(argc != 3)
	{
		printf("%s <IP><port>\n", argv[0]);
		exit(1);
	}

	printf("Test\n");

	return 0;
}
