#include <iostream>

using namespace std;

int main() {
    short number;
    cout << " Enter a number : ";
    cin >> number;

    cout << "The factorial of " << number << " is ";

    if (number < 0) {
        cout << "Undefined" << endl;
    } else if (number >= 17) {
        cout << "Result will overflow" << endl;
    } else {
        int accumulator = 1;
        for (; number > 0; accumulator *= number--)
            ;
        cout << accumulator << ".\n";
    }


    return 0;
}