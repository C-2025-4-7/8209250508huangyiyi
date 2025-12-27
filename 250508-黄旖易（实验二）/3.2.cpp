#include<iostream>
using namespace std;
bool is_prime(int num)
{
	int i;
	if (num <= 1)return 0;
	else for (i = 2; i < num; i++) {
		if (num % i == 0)i = i + num;
	}
	if (i > num)return 0;
	if (i == num)return 1;
}
int main() {
	int a[200];
	a[199] = 0;
	int i = 0;
	for (int p = 1;a[199]==0; p++)
		if (is_prime(p)) { a[i] = p; i++; }
	for (int p = 0; p < 200; p++)
	{
		cout << a[p] << '\t';
		if ((p + 1) % 10 == 0)cout << endl;
	}
	return 0;
}
