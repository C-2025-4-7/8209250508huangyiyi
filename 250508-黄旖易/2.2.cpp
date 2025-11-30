#include<iostream>
using namespace std;
int main()
{
	float x, y;
	cout << "请输入一个x值";
	cin >> x;
	if (0 < x && x<5)
		if (x < 1)y = 3 - 2 * x, cout << y;
		else y = 1 / (2 * x) + 1, cout << y;
	else y = x * x,cout << y << endl;
	return 0;
}