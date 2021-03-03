#include <iostream>
using namespace std;
void set(int *p) {
	*p = 5; //p가 가리키는 address에 접근해서 value값을 5로 설정
}
int main() {
	int x = 1; //x변수 선언
	set(&x); //set함수에 x의 address를 파라미터로 보냄
	cout << x; //5가 출력됨
}