//
// Created by Mazen on 10/26/2023.
//
#include<bits/stdc++.h>

using namespace std;

long long rec(long long a, long long b) {
    if (!a || !b)
        return 0;
    return rec(b, a % b) + a / b;
}

int main() {

    long long a, b;
    cin >> a >> b;
    if (a > b) {
        cout << rec(a, b);
    } else {
        cout << rec(b, a);
    }


    return 0;
}