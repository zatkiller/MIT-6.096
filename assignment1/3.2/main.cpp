#include <iostream>

using namespace std;

int main() {

    int n, i = 0, sum = 0, min = INT_MAX, max = INT_MIN;

    cin >> n;

    int num;

    while (i++ < n) {
        cin >> num;
        min = num < min ? num : min;
        max = num > max ? num : max;
        sum += num;
    }

    float mean = (float) sum / n;
    int range = max - min;

    cout << "Mean: " << mean << endl;
    cout << "Max: " << max << endl;
    cout << "Min: " << min << endl;
    cout << "Range: " << range << endl;

    return 0;
}