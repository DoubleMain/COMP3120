#include <stdio.h>

int main(void) {
	int pid = fork();

	if(pid == 0) { //child
		printf("hello\n");
	}
	else { //parent
	sleep(1);
		printf("goodbye\n");
	}

	return 0;
}
