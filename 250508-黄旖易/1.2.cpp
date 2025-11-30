#include<iostream>
#define pi 3.14
using namespace std;
int main()
{
	float r, h;
	cout << "请分别输入半径和锥高" << endl;
	cin >> r >> h;
	cout << "该圆锥的体积为：" << pi*r * r * h / 3 << endl;
	return 0;
}