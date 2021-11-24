#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;
    const char* toPrint = "Hello, World!";

    for (int i = 0; i < n; i++) {
        cout << toPrint << endl;
    }

    cout << "<<<DONE FOR LOOP FINISHED<<<" << endl;

    int j = 0;
    while (j < n) {
        cout << toPrint << endl;
        j++;
    }

    cout << "<<<DONE WHILE LOOP FINISHED<<<" << endl;

    int k = 0;
    do {
        cout << toPrint << endl;
        k++;
    } while (k < n);

    cout << "<<<DO WHILE LOOP FINISHED<<<" << endl;

    return 0;
}