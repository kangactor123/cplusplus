/*
* C++ 프로그래밍
* 충북 지역대학 ZOOM3반
* 학번: 202234-364971
* 이름: 강동희
*/

#include <iostream>
using namespace std;

int main()
{
  int a = 10, b = 100;
  int *ptr = &a; // 포인터 ptr을 선언한 후에 a의 주소를 넣는다.

  cout << "ptr이 가리키는 곳의 값 : " << *ptr << endl;
  *ptr = 20;   // ptr이 가리키는 곳에 20을 저장
  cout << "변수 a의 값 : " << a << endl;
  ptr = &b;    // ptr이 b를 가리키게 함
  cout << "변수 b의 값 : " << *ptr << endl;

  return 0;
}

// ㄱ = &a
// ㄴ = *ptr
// ㄷ = *ptr
// ㄹ = ptr