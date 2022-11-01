/*
* C++ 프로그래밍
* 충북 지역대학 ZOOM3반
* 학번: 202234-364971
* 이름: 강동희
*/

#include	<iostream>
using namespace std;

struct Rectangle {
    float  x1, y1;	// 좌측 하단의 꼭짓점 좌표
    float  x2, y2;	// 우측 상단의 꼭짓점 좌표
};


// 원의 데이터 입력
void inputData(Rectangle &rec)  // 함수 머리부
{
	cout << "좌측 하단 꼭지점 좌표(x) : ";
	cin >> rec.x1;
	cout << "좌측 하단 꼭지점 좌표(y) : ";
	cin >> rec.y1;
	cout << "우측 상단 꼭지점 좌표(x) : ";
	cin >> rec.x2;
	cout << "우측 상단 꼭지점 좌표(y) : ";
	cin >> rec.y2;
}

// 원의 데이터 출력
void prData(const Rectangle &rec)  // 함수 머리부
{
	cout << "좌측 하단 꼭지점 좌표(x, y) = (" << rec.x1 << "," << rec.y1 << ")" << endl;
	cout << "우측 상단 꼭지점 좌표(x, y) = (" << rec.x2 << "," << rec.y2 << ")" << endl;
}
float area(const Rectangle &rec)
{
    cout << "rec.x1 - rec.x2 = " << rec.x1 - rec.x2 << endl;
    cout << "rec.y1 - rec.y2 = " << rec.y1 - rec.y2 << endl;
    return (rec.x1 - rec.x2) * (rec.y1 - rec.y2);
}

int main()
{
	Rectangle rec = {1,2,3,4};
	inputData(rec);
	cout << "입력된 사각형의 정보" << endl;
	prData(rec);
	cout << "원의 면적 = " << area(rec) << endl;
}
