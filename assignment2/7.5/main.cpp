#include <iostream>

using namespace std;

int main () {

    char const *oddOrEven = "Never odd or even";

    char const *nthCharPtr = &oddOrEven[5];

    // 1.
    cout << *nthCharPtr << endl;

    nthCharPtr -= 2;

    // 2.
    cout << *nthCharPtr << endl;
 
    char const **pointerPtr = &nthCharPtr;

    // 5.
    cout << pointerPtr << endl;

    // 6.
    cout << **pointerPtr << endl;

    // 7.
    nthCharPtr += 1;

    // 8.
    cout << nthCharPtr - oddOrEven << endl;


    return 0;
}