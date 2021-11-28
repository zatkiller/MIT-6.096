#include <iostream>

using namespace std;

void printArray(int arr[], int len) {
    for (int i = 0; i < len; i++) {
        cout << arr[i];
        if (i < len - 1) cout << ", ";
    }
    cout << endl;
}

int main () {

    int arr[] = {1,2,3};

    printArray(arr, 3);

    return 0;
}