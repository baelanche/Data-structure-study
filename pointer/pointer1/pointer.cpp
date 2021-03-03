#include <iostream>
using namespace std;
int main(void) {
	int vomit = 15;
	char booger = 'B';

	cout << "vomit" << endl;
	cout << "Value:" << vomit << endl;
	cout << "Size:" << sizeof(vomit) << endl;
	cout << "Vomit's address" << &vomit << endl;

	cout << "booger" << endl;
	cout << "Value:" << booger << endl;
	cout << "Size:" << sizeof(booger) << endl;
	cout << "Booger's address" << &booger << endl;
}