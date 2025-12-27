#include<iostream>
#include<cmath>
using namespace std;
bool is_valid(double side1, double side2, double side3) {
	if (side1 > side2 + side3 || side1 + side2 < side3 || side1 + side3 < side2)return 0;
	else return 1;
}
int double_area(double side1, double side2, double side3) {
	int p = (side1 + side2 + side3) / 2, s;
	s = sqrt(p * (p - side1) * (p - side2) * (p - side3));
	return s;
}