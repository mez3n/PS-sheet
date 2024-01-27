//
// Created by Mazen on 1/9/2024.
//
#include<bits/stdc++.h>

using namespace std;
bool vis[2009];
vector<int> graph[2009];
bool path[2009];
vector<int> q;

bool dfs(int u) {
    vis[u] = true;
    path[u] = true;
    for (auto v: graph[u]) {
        if (!vis[v]) {
            if (dfs(v)) {
                return true;
            }
        } else if (path[v]) {
            return true;
        }
    }
    q.push_back(u);
    path[u] = false;
    return false;
}

int main() {
    int n;
    cin >> n;
    vector<vector<int>> prerequisites(n, vector<int>(n));

    for (int i = 0; i < n; i++) {
        int u, v;
        cin >> u >> v;
        prerequisites[i][0] = u;
        prerequisites[i][1] = v;
    }
    for (int i = 0; i < prerequisites.size(); i++) {
        graph[prerequisites[i][0]].push_back(prerequisites[i][1]);
    }

    memset(vis, 0, sizeof vis);
    memset(path, 0, sizeof path);
    for (int i = 0; i < n; i++) {
        if (!vis[i]) {
            if (dfs(i)) {
                cout << -1;
                return 0;
            }
        }
    }
    for (int i = 0; i < q.size(); i++) {
        cout << q[i];
    }


    return 0;
}