#include<iostream>
using namespace std;
int main()
{
	float x, y, z,c;
	cout << "请输入三角形的三边长度";
	cin >> x >> y >> z;
	if (x < y + z && y < x + z && z < x + y)
		if (x == z || x == y || z == y)c = x + y + z, cout << "该三角形为等腰三角形，周长为:" << c;
		else c = x + z + y, cout << "该三角形不为等腰三角形，周长为:" << c;
	else cout << "无法构成三角形";
	return 0;
}