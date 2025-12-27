//编写测试程是什么意思？//
#include<iostream>
using namespace std;
//算了，我直接自己写一个冒泡函数吧
void sort(int list[], int n)/*n是数组长度*/ {
	for (int i = 0; i < n; i++)
		for (int p = 0; p < n; p++)
			if (list[i] >list[p]) {
				int a = 0;
				a = list[p];
				list[p] = list[i];
				list[i] = a;
			}
}
int main() {
	int a[] = { 23,56,97,435,24,66 };
	int* p = a;
	sort(p, 6);
	cout << *p << endl;
	for (int i = 0; i < 6; i++)
		cout << a[i] << " ";
}
