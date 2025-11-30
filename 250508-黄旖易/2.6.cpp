#include<iostream>
using namespace std;
int main() {
	int a, b,x,y;
	cout << "请输入两个正整数";
	cin >> a >> b;
	if (a < b) {
		for (x = a; x > 0; x--)
			if (a % x == 0 && b % x == 0)cout << "最大公因数为:" << x<<endl,x=x-a;
		for (y = b; y< a * b + 1; y++)
			if (y % a == 0 && y % b == 0)cout << "最小公倍数为：" << y << endl, y = y * y + 1;
	}
	else for (x = b; x > 0; x--)
		if (a % x == 0 && b % x == 0)cout << "最大公因数为:" << x << endl, x = x - a;
	for (y =a; y < a * b + 1; y++)
		if (y % a == 0 && y % b == 0)cout << "最小公倍数为：" << y << endl, y = y * y + 1;
	return 0;
}