#include <iostream>
using namespace std;
int main() {
	short eyeballs = 2; //2byte ����
	short *ptr; //4byte ����

	ptr = &eyeballs; //eyeballs�� address
	//call by reference
	*ptr = 3; //ptr�� �ּҷ� �����Ͽ� 3�� ���� -> ptr�� �ּҴ� eyeballs�� �ּ��̹Ƿ� eyeballs�� value�� �����Ͽ� 3�� �����ϰ� �ȴ�

	cout << ptr << endl; //�ּ�
	cout << *ptr << endl; //��
	cout << eyeballs << endl;
}