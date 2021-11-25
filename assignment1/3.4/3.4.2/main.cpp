#include <iostream>

using namespace std;

int main() {

    int n;
    while (true) {
        cin >> n;

        bool condition = (n >= 0) && (n % 5 == 0);
        if (!condition) continue;
        
        cout << "Condition is true: " << n / 5;
        cout << endl;

    }

    return 0;
}