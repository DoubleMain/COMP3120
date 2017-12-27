#include <stdio.h>

int main(void) {
	int pid = fork();

	if(pid == 0) { //child
		wait();
		printf("this is child\n");
	}
	else { //parent
		
		printf("this is parent\n");
	}

	return 0;
}
