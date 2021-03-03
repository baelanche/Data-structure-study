#include <iostream>
using namespace std;
int main() {
	short eyeballs = 2; //2byte 차지
	short *ptr; //4byte 차지

	ptr = &eyeballs; //eyeballs의 address
	//call by reference
	*ptr = 3; //ptr의 주소로 접근하여 3을 대입 -> ptr의 주소는 eyeballs의 주소이므로 eyeballs의 value에 접근하여 3을 대입하게 된다

	cout << ptr << endl; //주소
	cout << *ptr << endl; //값
	cout << eyeballs << endl;
}