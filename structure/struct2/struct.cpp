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

	//포인터를 통해 스트럭쳐에 접근하기 위해서는 화살표 문법을 사용한다
	p->hp = 140;
	//(*p).hp = 140; 동일함
	p->doors = 2;
	strcpy_s(p->name, sizeof(p->name), "Jeep");

	cout << c.name << endl;
	cout << c.hp << endl;
	cout << c.doors << endl;
}