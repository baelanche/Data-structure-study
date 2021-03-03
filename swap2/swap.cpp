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
//�ּҷ� �����ؼ� �ּҹ����� �ٲٱ� ������ ���� value���� �����ȴ�
void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}