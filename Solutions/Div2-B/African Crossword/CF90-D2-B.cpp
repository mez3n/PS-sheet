//
// Created by Mazen on 10/25/2023.
//
#include<bits/stdc++.h>

using namespace std;
char arr[109][109];
bool ok[109][109];

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    memset(ok, true, sizeof ok);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            char c = arr[i][j];
            for (int k = 0; k < n; k++) {
                if (c == arr[k][j] && k != i) {
                    ok[i][j] = false;
                }
            }
            for (int k = 0; k < m; k++) {
                if (c == arr[i][k] && k != j) {
                    ok[i][j] = false;
                }
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (ok[i][j]) {
                cout << arr[i][j];
            }
        }
    }

    return 0;
}