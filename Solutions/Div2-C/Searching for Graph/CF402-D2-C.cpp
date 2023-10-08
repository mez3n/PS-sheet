//
// Created by Mazen on 10/2/2023.
//
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, p;
        cin >> n >> p;
        int count = 0;

        for (int i = 1; i <= n; i++) {
            for (int j = i+1; j <= n && count < 2 * n + p; j++) {
                cout << i << " " << j << endl;
                count++;
            }
        }
    }


    return 0;
}