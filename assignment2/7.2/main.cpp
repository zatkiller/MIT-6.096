#include <iostream>

using namespace std;

void swap (int &x, int &y) {
    int tmp = x;
    x = y;
    y = tmp;
}

int main () {

    int a = 1;
    int b = 2;

    cout << a << " " << b << endl;

    swap(a, b);

    cout << a << " " << b << endl;

    return 0;
}