/*
* C++ 프로그래밍
* 충북 지역대학 ZOOM3반
* 학번: 202234-364971
* 이름: 강동희
*/

#include  <iostream>
using  namespace  std;
/**
 * 참조는 포인터와 유사한 개념이다.
 * 참조의 선언은 & 기호를 활용한다.
*/
int main()
{
    int  a = 10, b = 20;
    int &aRef = a; // a를 참조하는 참조 변수 aRef를 선언
    cout << "a의 값 : " << a << endl;
    cout << "aRef가 참조하는 값 : " << aRef << endl << endl;
    aRef = 100;
    cout << "a의 값 : " << a << endl;
    aRef = b;
    cout << "a의 값 : " << a << endl;
    return 0;
}
