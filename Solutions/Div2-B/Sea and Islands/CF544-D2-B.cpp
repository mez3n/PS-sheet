//
// Created by Mazen on 9/16/2023.
//
#include<bits/stdc++.h>

using namespace std;
char arr[100][100];
bool visited[100][100];
int dx[4] = {1, 1, -1, -1};
int dy[4] = {1, -1, 1, -1};
int n, k;

bool rec(int x, int y) {
    if (x == n || y == n || y < 0 || x < 0 || visited[x][y]) {
        return false;
    }
    if (k == 0) {
        return true;
    }
    visited[x][y] = true;
    arr[x][y] = 'L';
    k--;
    for (int i = 0; i < 4; i++) {
        if (rec(x + dx[i], y + dy[i])) {
            return true;
        }

    }
    return false;

}

int main() {
    cin >> n >> k;
    memset(arr, 'S', sizeof arr);
    rec(0, 0);
    if (k == 0) {
        cout << "YES" << endl;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << arr[i][j];
            }
            cout << endl;
        }
    } else {
        cout << "NO" << endl;
    }


    return 0;
}