//
// Created by Mazen on 9/20/2023.
//
#include<bits/stdc++.h>

using namespace std;
char arr[59][59];
bool vis[59][59];
int n, m;
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};

bool dfs(int k, int startX, int startY, int x, int y) {
    if (x == startX && y == startY && k >= 4 && k % 2 == 0) {
        return true;
    }
    if (vis[y][x]) {
        return false;
    }
    vis[y][x] = true;
    for (int i = 0; i < 4; i++) {
        if (x + dx[i] < m && x + dx[i] >= 0 && y + dy[i] < n && y + dy[i] >= 0) {
            if (arr[y][x] == arr[y + dy[i]][x + dx[i]]) {
               // cout << x << " " << y << " " << arr[y][x] << " " << endl;
                if (dfs(k + 1, startX, startY, x + dx[i], y + dy[i])) {
                    return true;
                }
            }
        }
    }
    return false;
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    for (int y = 0; y < n; y++) {
        for (int x = 0; x < m; x++) {
            for (int i = 0; i < 4; i++) {
                if (arr[y][x] == arr[y + dy[i]][x + dx[i]]) {
                    memset(vis, false, sizeof vis);
                    vis[y][x]=true;
                    if (dfs(1, x, y, x + dx[i], y + dy[i])) {
                        cout << "Yes";
                        return 0;
                    }
                }
            }
        }
    }
    cout << "No";

    return 0;
}