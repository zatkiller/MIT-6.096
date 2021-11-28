#include <iostream>
#include <string>

using namespace std;

int length(char* str) {
    int length = 0;

    while (*(str + length) != '\0') length ++;

    return length;
}

int main () {

    string str = "Hello";

    cout << length(&str[0]) << endl;
}