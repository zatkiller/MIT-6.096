#include <iostream>

using namespace std;

int main() {

    int n;
    while (true) {
        cin >> n;

        bool condition = (n >= 0) && (n % 5 == 0);
        int number = condition ? (n / 5) : -1;
        cout << number;
        cout << endl;

    }

    return 0;
}