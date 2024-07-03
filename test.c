#include <stdio.h>

void plus_table() {
	for (int i = 1; i < 10; i++) {
		for (int j = 2; j < 10; j++)
			printf("%d + %d = %2d  ", j, i, i + j);
		printf("\n");
	}
}

void multiplication_table() {
	for (int i = 1; i < 10; i++) {
		for (int j = 2; j < 10; j++)
			printf("%d X %d = %2d  ", j, i, i * j);
		printf("\n");
	}
}

int main() {
	multiplication_table();
	plus_table();
	return 0;
}
