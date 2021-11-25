// bob and dole are integers

#include <iostream>

using namespace std;

int main() {

    int accumulator = 0;
    while (true)
    {
        if (dole == 0)
            break;
        accumulator += ((dole % 2 == 1) ? bob : 0);
        dole /= 2;
        bob *= 2;
    }
    cout << accumulator << "\n";

    return 0;
}

