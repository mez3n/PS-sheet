//
// Created by Mazen on 9/19/2023.
//
#include<bits/stdc++.h>

using namespace std;
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};
int arr[100][100];
int out[100][100];

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    memset(out, -1, sizeof(out));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == 1) {
                for (int k = 0; k < m; k++) {
                    out[i][k] = 1;
                }
                for (int l = 0; l < n; l++) {
                    out[l][j] = 1;
                }
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == 0) {
                for (int k = 0; k < m; k++) {
                    out[i][k] = 0;
                }
                for (int l = 0; l < n; l++) {
                    out[l][j] = 0;
                }
            }
        }
    }
    bool valid = true;
    bool skip = false;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            skip=false;
            if (arr[i][j] == 1 && valid) {
                for (int k = 0; k < m; k++) {
                    if (out[i][k] == 1) {
                        skip = true;
                    }
                }
                for (int l = 0; l < n; l++) {
                    if (out[l][j] == 1) {
                        skip = true;
                    }
                }
                if (skip) {
                    continue;
                }
                valid = false;
            }
        }
    }

    if (valid) {
        cout << "YES";
        cout << endl;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << out[i][j] << " ";
            }
            cout << endl;
        }
    } else {
        cout << "NO";
    }

    return 0;
}