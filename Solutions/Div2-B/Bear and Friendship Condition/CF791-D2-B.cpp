//
// Created by Mazen on 9/17/2023.
//
/*#include<bits/stdc++.h>

using namespace std;
vector<int> arr[150009];
int vis[150009];

bool dfs(int searchfor, int cur, int i) {
    if (cur == searchfor) {
        return true;
    }
    if (vis[cur]) {
        return false;
    }
    vis[cur] = true;
    if (arr[cur].size() == 1 && i == 0) {
        return true;
    }
    bool friends = true;
    for (auto u: arr[cur]) {
        if (i == 0) {
            memset(vis,false,sizeof vis);
            vis[cur]=true;
            if (!dfs(searchfor, u, i + 1)) {
                friends = false;
            }
        } else {
            if (dfs(searchfor, u, i + 1)) {
                return true;
            }
        }
    }
    if (i == 0) {
        return friends;
    }
    return false;

}

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        arr[x].push_back(y);
        arr[y].push_back(x);
    }
    for (int i = 1; i <= n; i++) {
        for (auto u: arr[i]) {
            memset(vis,false,sizeof vis);
            if (!dfs(i, u, 0)) {
                cout << "NO";
                return 0;
            }
        }
    }
    cout << "YES";


    return 0;
}*/