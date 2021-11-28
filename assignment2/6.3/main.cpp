#include <iostream>

using namespace std;

const int WIDTH = 2;
const int LENGTH = 3;

void transpose ( const int input [][ LENGTH ], int output [][ WIDTH ]) {
    for (int i = 0; i < WIDTH; i++) {
        for (int j = 0; j < LENGTH; j++) {
            output[j][i] = input[i][j];
        }
    }
};

int main () {
    int input [WIDTH][LENGTH] = {{1,2,3}, {4,5,6}};
    int output [LENGTH][WIDTH];

    transpose(input, output);

    for (int i = 0; i < LENGTH; i++) {
        for (int j = 0; j < WIDTH; j++) {
            cout << output[i][j] << " ";
        }
        cout << "\n";
    }
}