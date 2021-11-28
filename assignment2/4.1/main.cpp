#include <iostream>

using namespace std;

int sum(const int num1, const int num2) {
    return num1 + num2;
}

double sum(const double num1, const double num2) {
    return num1 + num2;
}

int main () {
    cout << sum(1, 2) << endl;
    cout << sum(2.00, 5.00) << endl;
    return 0;
}