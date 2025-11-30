#include<iostream>
using namespace std;
int main() {
	float a,b,x,y,z;
	cout << "请输入一个数字：";
	cin >> a;
	b = 1,z=1;
	for (x = a; x-z >= 0.00001||z-x>=0.00001; z=x,x = b)
		y = (x + (a/ x)) / 2, b = y;
	cout << b;
	return 0;
}