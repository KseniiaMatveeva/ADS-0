// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
    if (a == b) {
        return a;
    }
    if (a > b) {
        long tmp = a;
        a = b;
        b = tmp;
    }
    return gcd(a, b - a);
}
