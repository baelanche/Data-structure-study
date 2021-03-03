#include <iostream>
using namespace std;
int main(void) {
	float fv = 3.14;
	float *pfv;

	pfv = &fv; //pfv는 fv의 주소를 value로 가짐
	cout << "value: " << pfv << endl; //fv의 address = pfv의 value
	cout << "size: " << sizeof(pfv) << endl; //포인터변수의 크기는 4byte
	cout << "address: " << &pfv << endl; //pfv의 주소(포인터'변수'이기 때문에 자신의 address를 가진다)
}