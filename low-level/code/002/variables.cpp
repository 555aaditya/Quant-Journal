#include <iostream>

int first() {
    // declare
    int x;

    // assign
    x = 5;

    // print
    std::cout << x << std::endl ;

    return 0;
}

int second() {
    // declare and assign
    int x = 10;

    // print
    std::cout << x << std::endl;

    return 0;
}

int main() {

    first();
    second();
    return 0;
}