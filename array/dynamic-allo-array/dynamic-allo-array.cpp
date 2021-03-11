#include <iostream>
using namespace std;
int main() {
	int i, n, *list;
	printf("Enter the number of number to generate: ");
	scanf_s("%d", &n);
	if (n < 1) {
		fprintf(stderr, "Improper value of n \n");
		exit(EXIT_FAILURE);
	}

	list = (int *)malloc(sizeof(int));
	if (list == NULL) {
		fprintf(stderr, "lack of memory\n");
		exit(EXIT_FAILURE);
	}
}