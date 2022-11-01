/*
* C++ 프로그래밍
* 충북 지역대학 ZOOM3반
* 학번: 202234-364971
* 이름: 강동희
*/

#include <iostream>
using namespace std;

int getMax(const int arr[], int len)  // 함수 머리부 (int형 배열 arr과 배열의 크기를 나타내는 정수형 매개변수 len)
// (ㄱ) = const int arr[], int len
{
    int max = INT_MIN;    // int형의 최솟값을 max로 가정함
    for (int i = 0; i < len; i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
    }
    return max; // (ㄴ) = max
}

// float형 배열에 사용할 수 있도록 getMax 함수를 다중정의
float getMax(const float arr[], int len)
{
    float max = 0;
    for (int i = 0; i < len; i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
    }
    return max; 
}

int main()
{
    int data[10] = { 10, 23, 5, 9, 22, 48, 12, 10, 55, 31 };
    float fData[10] = { 10, 23, 5, 9, 22, 48, 12, 10, 55.7, 31 };

    cout << "데이터 : ";
    for (int i = 0; i < 10; i++)
        cout << data[i] << "  ";
    cout << endl << endl;
    cout << "최댓값 = " << getMax(data, 10) << endl;
}
