#include <stdio.h>

int main(void){
	int pid = fork();

	if(pid == 0) { //child
		execl("/bin/ls", "ls", "-l", 0);
	}
	else { //parent
		wait();
		printf("ls complete\n");
	}
	return 0;
}
