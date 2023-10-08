//
// Created by Mazen on 9/30/2023.
//
#include<bits/stdc++.h>

using namespace std;

long long gcd(long long a, long long b) {
    while (a != b) {
        if (a > b) {
            a -= b;
        } else {
            b -= a;
        }
    }
    return a;
}

int main() {
    long long a, b;
    cin >> a >> b;
    long long lcm = a * b / gcd(a, b);
    long long x = lcm / a - 1;
    long long y = lcm / b - 1;
    if (x < y)x++;
    else y++;
    if (x > y) {
        cout << "Dasha";
    } else if (x < y) {
        cout << "Masha";
    } else {
        cout << "Equal";
    }


    return 0;
}