#include<iostream>
using namespace std;
int gcd(int n, int m) {
	int max=0;
	for (int i = 2; i <= n && i <= m; i++)
		if (n % i == 0 && m % i == 0) {
			max = i; i =i + n +m;
		}
	if (max == 0)max = (m < n ? m: n);
	return max;
}
int main() {
	cout << "请输入两个数" << endl;
	int a, b;
	cin >> a >> b;
	cout << gcd(a,b);
	return 0;
}