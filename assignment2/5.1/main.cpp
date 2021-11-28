#include <iostream>
#include <stdlib.h>

using namespace std;

int main () {
    double x = rand() / (double) RAND_MAX;
    double y = rand() / (double) RAND_MAX;

    cout << x << y << endl;

    return 0;
}