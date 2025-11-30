#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	float f, c;
	cout << "请输入华氏度：";
	cin >> f;
	c = (f - 32) / 1.8;
	cout << "相应的摄氏度为：" <<fixed<< setprecision(2) << c << endl;
	return 0;
}