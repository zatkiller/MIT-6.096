#include <iostream>

using namespace std;

void swap (int ** x, int ** y) {
    int* tmp = *x;
    *x = *y;
    *y = tmp;
}

int main () {

    int a = 1;
    int b = 2;
    int *a_ptr = &a;
    int *b_ptr = &b;

    cout << *a_ptr << " " << *b_ptr << endl;

    swap(&a_ptr, &b_ptr);

    cout << *a_ptr << " " << *b_ptr << endl;

    return 0;
}