#include <iostream>
using namespace std;
int parseHex(const char* const hexString) {
    int result = 0;
    int i = 0;
    while (hexString[i] != '\0') {
        char c = hexString[i];
        int value = 0;
        if (c >= '0' && c <= '9') {
            value = c - '0'; 
        }
        else if (c >= 'A' && c <= 'F') {
            value = c - 'A' + 10;
        }
        else if (c >= 'a' && c <= 'f') {
            value = c - 'a' + 10;
        }
        else {
            break;
        }
        result = result * 16 + value;
        i++;
    }
    return result;
}