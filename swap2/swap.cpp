#include <iostream>
using namespace std;
void swap(int* a, int* b);
int main() {
	int val1 = 10;
	int val2 = 20;

	printf("Before val1 : %d \n", val1);
	printf("Before val2 : %d \n", val2);

	swap(&val1, &val2);

	printf("After val1 : %d \n", val1);
	printf("After val2 : %d \n", val2);
}
//call by reference
//주소로 접근해서 주소번지를 바꾸기 때문에 변한 value값이 유지된다
void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}