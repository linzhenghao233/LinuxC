#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int* p = NULL;
	int i;

	p = malloc(sizeof(int));
	if (p == NULL)
		exit(1);

	printf("Hello world!\n");

		exit(0);
}