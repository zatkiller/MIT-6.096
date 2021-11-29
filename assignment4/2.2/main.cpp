#include <iostream>

#define min(x, y) (x < y ? x : y)

int main() {
    std::cout << min(1,2) << std::endl;
    std::cout << min('b', 'a') << std::endl;
    return 0;
}
