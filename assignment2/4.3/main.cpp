#include <iostream>

using namespace std;

int sum(const int num1, const int num2, const int num3) {
    return num1 + num2 + num3;
}

int sum(const int num1, const int num2, const int num3, const int num4) {
    return num1 + num2 + num3 + num4;
}

int main () {
    cout << sum(1, 2, 3) << endl;
    cout << sum(1, 2, 3, 4) << endl;
    return 0;
}