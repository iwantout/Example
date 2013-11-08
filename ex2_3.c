#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void){
	int fd;
	
	close(0);

	fd=open("unix.txt",O_RDWR);

	if(fd == -1){
		perror("Excl");
		exit(0);

	}
	printf("unix.txt : fd = %d ",fd);
	close(fd);
	
	return 0;

}
