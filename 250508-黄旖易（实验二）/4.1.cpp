#include<iostream>
using namespace std;
int main() {
	int a[10]={NULL}, b[10], t = 0, p;
	cout << "请输入十个数" << endl;
	for (int i = 0; i < 10; i++)
		cin >> b[i];
	for (int i = 0; i < 10; i++) {
		for (p = 0; p < t + 1; p++)
			if (b[i] == a[p]) { p = p + 20; cout << "delete b[" << i << "]" << endl; }//输出时就可以知道去掉了那些数
		if (p == t+1) { a[t] = b[i]; t++; }
	}
	for (int i = 0; i < 10; i++)
		if(a[i]!=NULL)cout << a[i] << endl;
	return 0;
}