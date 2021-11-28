#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <time.h>

using namespace std;

double calculatePi(const int n) {    
    srand(time(0));
    int score = 0;

    for (int i = 0; i < n; i++) {
        double x = rand() / (double) RAND_MAX;
        double y = rand() / (double) RAND_MAX;

        if(sqrt(x*x + y*y) < 1) score++;
    }

    return score / double(n) * 4;
}

int main () {
    int n;
    cin >> n;
    cout << calculatePi(n) << endl;
}