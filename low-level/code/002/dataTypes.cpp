#include <iostream>

void first() {
    // Integer
    int x = 12;
    std::cout << x << std::endl;
}

void second() {
    // double
    double x = 12.21;
    std::cout << x << std::endl;
}

void third() {
    // char
    char x = 'A';
    char y = '$';
    std::cout << x << std::endl;
    std::cout << y << std::endl;
}

void fourth() {
    bool valid = true;
    bool work = 0;
    std::cout << valid << std::endl;
    std::cout << work << std::endl;
}


void fifth() {
    std::string name = "Aaditya";
    std::cout << name << '\n';
}

int main() {
    first();
    second();
    third();
    fourth();
    fifth();
    return 0;
}