#include <stdio.h>

void main() {
	FILE *fp;

	int index;
	int data;

	fp = fopen("test.txt", "w");
	
	for (index = 0 ; index < 10 ; index++) {
		fprintf(fp, "%d\n", index);
	}

	fclose(fp);

	fp = fopen("test.txt", "r");

	while(fscanf(fp, "%d", &data) != EOF ) {
	printf("%d\n", data);
	}
	fclose(fp);
}

