#include <iostream>
using namespace std;
void swap(int a, int b);
int main() {
	int val1 = 10;
	int val2 = 20;

	printf("Before val1 : %d \n", val1);
	printf("Before val2 : %d \n", val2);

	swap(val1, val2);

	printf("After val1 : %d \n", val1);
	printf("After val2 : %d \n", val2);
}
//call by value
//swap 함수 내에서는 값 교환이 이루어지지만 함수 종료시에는 원래대로 돌아감
void swap(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}