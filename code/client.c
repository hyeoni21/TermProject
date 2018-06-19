#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<sys/socket.h>
#include<arpa/inet.h>


void error_handling(char *msg);

int main(int argc, char **argv)
{
	int sock;

	struct sockaddr_in serv_addr;

	
	if(argc != 3)
	{
		printf("Usage : %s <IP> <port>\n", argv[0]);
		exit(1);
	}
	sock=socket(PF_INET, SOCK_STREAM, 0);

	

	memset(&serv_addr, 0, sizeof(serv_addr));

	serv_addr.sin_family=AF_INET;

	serv_addr.sin_addr.s_addr=inet_addr(argv[1]);

	serv_addr.sin_port=htons(atoi(argv[2]));

	  

	if(connect(sock, (struct sockaddr*)&serv_addr, sizeof(serv_addr))==-1)

		error_handling("connect() error");

	while(1)
	{
		
	}
	printf("client\n");

	return 0;
}

void error_handling(char *msg)
{
	printf("%s", msg);
	exit(1);
}