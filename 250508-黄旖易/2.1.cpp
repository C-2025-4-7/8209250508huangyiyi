#include<iostream>
using namespace std;
int main()
{
	char t;
	cout << "请输入一个字符";
	cin >> t;
	if (t >= 'a' && t <= 'z')t = t - 32,
		cout << "转换后的大写字符:" << t << endl;
	else cout << "后继字符的ASCII 码为：" << static_cast<int>(t + 1) << endl;
	return 0;
}