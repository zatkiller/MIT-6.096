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
    } 

    switch (number) {
        case 1:
            cout << "1" << endl;
            break;
        case 2:
            cout << "2" << endl;
            break;
        case 3:
            cout << "6" << endl;
            break;
        case 4:
            cout << "24" << endl;
            break;
        case 5:
            cout << "120" << endl;
            break;
        case 6:
            cout << "720" << endl;
            break;
        case 7:
            cout << "5040" << endl;
            break;
        case 8:
            cout << "40320" << endl;
            break;
        case 9:
            cout << "362880" << endl;
            break;
        case 10:
            cout << "3628800" << endl;
            break;
        default:
            cout << "Input not handled" << endl;
            break;
    }



    return 0;
}