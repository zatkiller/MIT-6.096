#include <iostream>

using namespace std;

void reverse(int arr[], const int len) {
    for (int i = 0; i < len / 2; i++) {
        int temp = arr[len - 1 - i];
        arr[len - 1 - i] = arr[i];
        arr[i] = temp;
    }
}

int main () {

    int arr[] = {1,2,3,4,5,6,7,8,9};

    reverse(arr, 9);

    for (int i = 0; i < 9; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}