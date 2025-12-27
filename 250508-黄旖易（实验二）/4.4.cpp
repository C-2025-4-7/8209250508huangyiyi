#include<iostream>
using namespace std;
//可以直接将两个数组合并，之后再进行冒泡排序
//先合并
void merge(const int list1[], int size1, const int list2[], int size2, int list3[]) {
	int n = size1 + size2;
	int a[80];
	//void* p = a;
	for (int i = 0; i < size1; i++) {
		a[i] = list1[i];
	}
	for (int i = 0; i < size2; i++) {
		a[i + size1] = list2[i];
	}
//现在进行冒泡排序
	for(int i=0;i<n;i++)
		for (int p = 0; p < n - i; p++) {
			int b;
			if (a[i] < a[p]) {
				b = a[i];
				a[i] = a[p];
				a[p] = b;
			}
		}
}