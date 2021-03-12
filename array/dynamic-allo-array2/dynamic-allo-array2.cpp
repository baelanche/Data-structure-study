#include <iostream>
//casting error
#define MALLOC(p,s)\
if(!((p)=malloc(s))) {\
	fprintf(stderr, "Insufficient memory");\
	exit(EXIT_FAILURE);\
}
using namespace std;
int **make2dArray(int rows, int cols) {
	int **x, i;
	x = (int **)malloc(rows * sizeof(*x));
	//MALLOC(x, rows * sizeof(*x));
	for (i = 0; i < rows; i++)
		x[i] = (int*)malloc(cols * sizeof(**x));
		//MALLOC(x[i], cols * sizeof(**x));
	return x;
}
int main() {
	int** myArray;
	myArray = make2dArray(5, 10);
	myArray[2][4] = 6;
	free(myArray);
}