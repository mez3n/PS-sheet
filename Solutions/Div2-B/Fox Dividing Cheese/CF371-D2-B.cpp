//
// Created by Mazen on 9/28/2023.
//
#include<bits/stdc++.h>

using namespace std;

int gcd(int a, int b) {
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
    int a, b;
    cin >> a >> b;

    int count = 0;
    bool valid = true;
    int great=gcd ( a,b);
    a/=great;
    b/=great;
    while (a!=1||b!=1) {
        if (a > b) {
            if (a % 2 == 0) {
                a /= 2;
            } else if (a % 3 == 0) {
                a /= 3;
            } else if (a % 5 == 0) {
                a /= 5;
            } else {
                valid = false;
                break;
            }
        } else {
            if (b % 2 == 0) {
                b /= 2;
            } else if (b % 3 == 0) {
                b /= 3;
            } else if (b % 5 == 0) {
                b /= 5;
            } else {
                valid = false;
                break;
            }
        }
        count++;
    }
    if (!valid) {
        count = -1;
    }
    cout << count;

    return 0;
}