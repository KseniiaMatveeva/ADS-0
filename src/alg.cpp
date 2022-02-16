// Copyright 2021 NNTU-CS

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

