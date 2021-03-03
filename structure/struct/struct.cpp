#include <iostream>
#include <string>
using namespace std;
struct STUDENT {
	char name[6];
	int ID;
	float GPA;
};
void blarf(STUDENT &x) {
	x.GPA++;
}
int main() {
	STUDENT t;

	strcpy_s(t.name, sizeof(t.name), "JAMES");
	t.ID = 1133;
	t.GPA = 3.99;
	blarf(t);

	cout << t.name << endl;
	cout << t.ID << endl;
	cout << t.GPA << endl;
}