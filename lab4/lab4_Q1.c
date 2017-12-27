#include <stdio.h>

int main(void) {
	int x = 100;

	int pid = fork();
	
	if(pid == 0) {
		x = 10;
		printf("variable x in Child is %d\n", x);
	}
	else {
		x = 88;
		printf("variable x in Parent is %d\n", x);
	}

	return 0;
}
