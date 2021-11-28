#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main () {

    int n = 10, score = 0;

    for (int i = 0; i < n; i++) {
        double x = rand() / (double) RAND_MAX;
        double y = rand() / (double) RAND_MAX;

        if(sqrt(x*x + y*y) < 1) score++;

        cout << score << endl;
    }

    return 0;
}