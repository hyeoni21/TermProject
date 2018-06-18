#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<sys/socket.h>
#include<arpa/inet.h>

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
