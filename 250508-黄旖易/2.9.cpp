#include <iostream>
using namespace std;
int main(){
    int apple = 2;
    int totalApples = 0;
    int days = 0;
    while (apple <= 100) {
        totalApples += apple;
        days++;
        apple *= 2;
    }
    double totalPrice = totalApples * 0.8;
    double averagePrice = totalPrice / days;
    cout << "每天平均花费: " << averagePrice << "元" << endl;
    return 0;
}