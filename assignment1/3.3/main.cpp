#include <iostream>

using namespace std;

bool isPrime(int num) {
    for (int i = 2; i < num; i++) {
        if (num % i == 0) return false;
    }

    return true;
}

int main() {
    int n;
    cin >> n;

    int start = 2;
    
    while (n > 0) {
        if (isPrime(start)) {
            n--;
            cout << "Prime Number:" << start;
            cout << endl;
        }
        start++;
    }

    return 0;
}