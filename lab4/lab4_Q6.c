#include <stdio.h>
#include <stdlib.h>

#define BUFSIZE 30

int main(void) {
	char buffer[BUFSIZE];
	int fd1[2], fd2[2];

	if(pipe(fd1) == -1 || pipe(fd2) == -1 ) {
		perror("pipe error..\n");
		exit(1);
	}

	int pid1, pid2;
	int state;

	pid1 = fork(); //create fork
	if(pid1 == 0) { //child
		write(fd1[1], "This letter is from child", BUFSIZE);
		sleep(2);
		read(fd2[0], buffer, BUFSIZE);
		printf("child 1\n");
		
	}
	else { //parent
		read(fd1[0], buffer, BUFSIZE);
		printf("parent\n");
		write(fd2[1], "This letter is from parent", BUFSIZE); 
	}


	return 0;
}
