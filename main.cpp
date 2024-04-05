#include <iostream>

consteval int get_value() {
    return 3;
}
int main() {
    constexpr int value = get_value();
    std::cout << "value : " << std::endl;
    return 0;
}
