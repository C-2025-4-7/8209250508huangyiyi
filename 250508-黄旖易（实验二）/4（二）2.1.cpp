//这不和之前的题一样吗，那我直接用之前的代码了
#include <iostream>
using namespace std;

int indexOf(const char s1[], const char s2[]) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    for (int i = 0; i <= len2 - len1; i++) {
        int j;
        for (j = 0; j < len1; j++) {
            if (s1[j] != s2[i + j]) {
                break; // 只要有一个字符不匹配，就跳出内层循环，尝试下一个位置
            }
        }
        if (j == len1) {
            return i;
        }
    }
    return -1;
}

int main() {
    char str1[100], str2[100];
    cout << "请输入主串 s2: ";
    cin.getline(str2, 100);
    cout << "请输入子串 s1: ";
    cin.getline(str1, 100);
    int result = indexOf(str1, str2);
    if (result != -1) {
        cout << "找到子串，起始位置为: " << result << endl;
    }
    else {
        cout << "未找到子串" << endl;
    }
    return 0;
}