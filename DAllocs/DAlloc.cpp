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
    int *intPtr;
    intPtr = new int[4];// 4개의 int 값을 저장할 메모리 할당
    *intPtr = 10;
    *(intPtr + 1) = 20;
    intPtr[2] = 30; // *(intPtr + 2) = 30; 과 동일한 코드입니다.
    intPtr[3] = 40;
    for (int *p = intPtr, i = 0; i < 4; i++) {
        cout << intPtr[i] << " ";  // p가 가리키는 곳의 값을 출력한 후 p를 다음으로 이동
        cout << endl;
    }
    delete [] intPtr; // ㈀에서 할당한 메모리 반환
    return 0;
}
