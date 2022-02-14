// Copyright 2021 NNTU-CS
#include <iostream>
#include "alg.h"

int gcd(int a, int b) {
    if (a == b) {
        return a;
    }
    if (a > b) {
        int zam = a;
        a = b;
        b = zam;
    }
    return gcd(a, b - a);
}

int main() {
    std::cout << gcd(10,15) << std::endl;
    return 0;
}
