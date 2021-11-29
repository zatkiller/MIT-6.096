#include <iostream>

template<typename T>
T min(const T t1, const T t2) {
    return t1 < t2 ? t1 : t2;
}

int main() {
    std::cout << min(1,2) << std::endl;
    std::cout << min('b', 'a') << std::endl;
    return 0;
}
