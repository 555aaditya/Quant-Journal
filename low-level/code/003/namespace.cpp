#include <iostream>

namespace first {
    int x = 10;
}

namespace second {
    int x = 20;
}

void okay() {
    using namespace second;
    std::cout << x << '\n';
}

int main() {
    int x = 30;

    std::cout << x << '\n';
    std::cout << first::x << '\n';
    std::cout << second::x << '\n';
    okay();
    return 0;
}