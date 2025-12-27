#include<iostream>
using namespace std;
int main() {
    bool a[101] = { 0 };
    for (int i = 1; i < 101; i++) {
        for (int j = i; j <= 100; j = j + i) {
            a[j] = !a[j];
        }
    }
    cout << "开着的柜子号码是: ";
    for (int i = 1; i < 101; i++) {
        if (a[i]) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}