//
// Created by Mazen on 10/2/2023.
//
#include<bits/stdc++.h>

using namespace std;
int mem[1009];

bool rec(int i) {
    if (i == 1) {
        return false;
    }
    int &ret = mem[i];
    if (ret != -1) {
        return ret;
    }
    bool a = false;
    for (int j = 1; j < i; j++) {
        if (i % j == 0)
            a |= !rec(i - j);
    }
    return mem[i] = a;
}

bool divisorGame(int n) {
    memset(mem, -1, sizeof mem);
    return rec(n);
}

int main() {

    int n;
    cin >> n;
    cout<<divisorGame(n);


    return 0;
}