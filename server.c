#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv)
{
	if(argc!=2)
	{
		printf("%s <port>", argv[1]);
		exit(1);
	}

	printf("server\n");

	return 0;
}
