#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(){
	
	size_t size=15;
	char *host;
	host=malloc(sizeof(size)*size);
	gethostname(host, size);
	printf("%s",host);
	return 0;
}
