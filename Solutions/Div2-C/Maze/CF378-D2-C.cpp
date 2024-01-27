//
// Created by Mazen on 10/30/2023.
//
#include<bits/stdc++.h>

using namespace std;
char grid[509][509];
bool vis[509][509];
int k, m, n;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

void dfs(int x, int y) {
    if (vis[y][x]) {
        return;
    }
    vis[y][x] = true;

    for (int l = 0; l < 4; l++) {
        int X = x + dx[l];
        int Y = y + dy[l];
        if (X > -1 && X < m && Y > -1 && Y < n && grid[Y][X] == '.') {

            if (!vis[Y][X]) {
                dfs(X, Y);
            }
        }
    }
    if(k) {
        grid[y][x] = 'X';
        k--;
    }
    if (k==0) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << grid[i][j];
            }
            cout << endl;
        }
        exit(0);
    }
}

int main() {
    cin >> n >> m >> k;
    memset(vis, false, sizeof vis);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == '.') {
                dfs(j, i);
            }

        }
    }


    return 0;
}