#include <iostream>
#include <string>
using namespace std;
struct Car {
	char name[6];
	int hp;
	int doors;
};
int main() {
	Car c;
	Car *p;

	p = &c;

	//�����͸� ���� ��Ʈ���Ŀ� �����ϱ� ���ؼ��� ȭ��ǥ ������ ����Ѵ�
	p->hp = 140;
	//(*p).hp = 140; ������
	p->doors = 2;
	strcpy_s(p->name, sizeof(p->name), "Jeep");

	cout << c.name << endl;
	cout << c.hp << endl;
	cout << c.doors << endl;
}