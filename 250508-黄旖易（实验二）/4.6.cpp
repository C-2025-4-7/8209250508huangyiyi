#include <iostream>
#include <cctype> 
    using namespace std;
    void count(const char s[], int counts[]) {
        for (int i = 0; i < 26; i++) {
            counts[i] = 0;
        }
        for (int i = 0; s[i] != '\0'; i++) {
            char ch = s[i];
            if (isalpha(ch)) { //  将字符转换为小写
                ch = tolower(ch);
                int index = ch - 'a';
                counts[index]++;
            }      
        }
    }
    int main() {
        const char* testStr = "Hello World";
        int counts[26]; 
        count(testStr, counts);
        cout << testStr <<endl;
        for (int i = 0; i < 26; i++) {
            if (counts[i] > 0) {
                char letter = 'a' + i;
                cout << letter << ": " << counts[i] << endl;
            }
        }
        return 0;
    }