#include <iostream>
using namespace std;
void set(int *p) {
	*p = 5; //p�� ����Ű�� address�� �����ؼ� value���� 5�� ����
}
int main() {
	int x = 1; //x���� ����
	set(&x); //set�Լ��� x�� address�� �Ķ���ͷ� ����
	cout << x; //5�� ��µ�
}