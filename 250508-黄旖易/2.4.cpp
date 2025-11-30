#include<iostream>
using namespace std;
int main()
{
     int num1, num2;
        char op;

        // 输入
        cout << "请输入第一个数: ";
        cin >> num1;
        cout << "请输入运算符 (+ - * / %): ";
        cin >> op;
        cout << "请输入第二个数: ";
        cin >> num2;

        // 处理运算
        switch (op) {
            case '+':
                cout << "结果: " << num1 + num2 << endl;
                break;
            case '-':
                cout << "结果: " << num1 - num2 << endl;
                break;
            case '*':
                cout << "结果: " << num1 * num2 << endl;
                break;
            case '/':
                if (num2 == 0) {
                    cout << "错误: 除数不能为0!" << endl;
                }
     else {
      cout << "结果: " << num1 / num2 << endl;
  }
  break;
case '%':
    if (num2 == 0) {
        cout << "错误: 除数不能为0!" << endl;
    }
else if (num1 != (int)num1 || num2 != (int)num2) {
 cout << "错误: 取模运算要求两个操作数都是整数!" << endl;
}
else {
 cout << "结果: " << (int)num1 % (int)num2 << endl;
}
break;
default:
    cout << "错误: 非法运算符!" << endl;
}

return 0;
    }
