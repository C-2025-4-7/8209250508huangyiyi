#include <iostream>
#include <cctype> 
using namespace std;

int main(){
    char c;
    int count_letter = 0;  
    int count_space = 0;   
    int count_digit = 0;
    int count_other = 0; 

    cout << "请输入一行字符：";
    while ((c = getchar()) != '\n') {
        if (isalpha(c)) {
            count_letter++;
        }
 else if (isspace(c)) {
  count_space++;
}
else if (isdigit(c)) {
 count_digit++;
}
else {
 count_other++;
}
}
    cout << "英文字母个数：" << count_letter << endl;
    cout << "空格个数：" << count_space << endl;
    cout << "数字字符个数：" << count_digit << endl;
    cout << "其他字符个数：" << count_other << endl;

    return 0;
}