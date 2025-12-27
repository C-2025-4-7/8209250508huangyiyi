#include<iostream>
using namespace std;
int main() {
	int n;
	cout << "请输入数组长度:";
	cin >> n;
	int* p = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> p[i];
	}
	//然后再进行排序
	for(int i=0;i<n;i++)
		for (int t = 0; t < n; t++)
			if (p[i] > p[t]) {
				int b = p[t];
				p[t] = p[i];
				p[i] = b;
			}
	//现在输出排好的数组
	for (int i = 0; i < n; i++)
		cout << p[i] << " ";
	delete[]p;
	return 0;
}