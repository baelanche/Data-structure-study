#include <iostream>
using namespace std;
int main(void) {
	float fv = 3.14;
	float *pfv;

	pfv = &fv; //pfv�� fv�� �ּҸ� value�� ����
	cout << "value: " << pfv << endl; //fv�� address = pfv�� value
	cout << "size: " << sizeof(pfv) << endl; //�����ͺ����� ũ��� 4byte
	cout << "address: " << &pfv << endl; //pfv�� �ּ�(������'����'�̱� ������ �ڽ��� address�� ������)
}