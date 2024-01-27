//
// Created by Mazen on 1/9/2024.
//
#include<bits/stdc++.h>

using namespace std;
bool vis[1009];
vector<int> graph[1009];

void dfs(int u) {
    vis[u] = true;
    for (auto v: graph[u]) {
        if (!vis[v]) {
            dfs(v);
        }
    }
}

int main() {
    int n;
    cin >> n;
    vector<vector<int>> trust(3, vector<int>(2));

    for (int i = 0; i < 3; i++) {
        int u, v;
        cin >> u >> v;
        trust[i][0] = u;
        trust[i][1] = v;
    }
    for (int i = 0; i < trust.size(); i++) {
        graph[trust[i][1]].push_back(trust[i][0]);
    }
    for (int i = 1; i <= n; i++) {
        memset(vis, false, sizeof vis);
        dfs(i);
        vis[i] = false;
        bool bad = false;
        for (int j = 1; j <= n; j++) {
            if (!vis[j] && j != i) {
                bad = true;
                break;
            }
        }
        if (!bad) {
            cout << i;
            return 0;
        }
    }
    cout << -1;

    return 0;
}