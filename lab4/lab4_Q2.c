#include <stdio.h>

void main() {
	FILE *fp, *fp_child, *fp_parent;

	int index;
	int data;

	fp = fopen("lab4_Q2.txt", "w");

	int pid = fork();

	if(pid == 0) {
		fp_child = fopen("lab4_Q2_child.txt", "w");
		fprintf(fp_child, "child text\n");
		fclose(fp_child);
	}
	else {
		fp_parent = fopen("lab4_Q2_parent.txt", "w");
		fprintf(fp_parent, "parent text\n");
		fclose(fp_parent);
	}

	fclose(fp);

	fp = fopen("lab4_Q2.txt", "r");

	while(fscanf(fp, "%d", &data) != EOF ) {
		printf("%d\n", data);
	}
	fclose(fp);
}

