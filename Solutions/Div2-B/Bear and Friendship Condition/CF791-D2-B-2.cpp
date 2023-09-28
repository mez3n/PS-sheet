//
// Created by Mazen on 9/17/2023.
//
#include<bits/stdc++.h>

using namespace std;
vector<int> arr[150009];
int vis[150009];
long long edges = 0, nodes = 0;

void dfs(int index) {
    vis[index] = true;
    nodes++;
    for (auto u: arr[index]) {
        edges++;
        if (!vis[u]) {
            dfs(u);
        }
    }
}

int main() {
    long long n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        arr[x].push_back(y);
        arr[y].push_back(x);
    }
    for (int i = 1; i <= n; i++) {
        if (!vis[i]) {
            nodes=0,edges=0;
            dfs(i);
            long long c= nodes*(nodes-1)/2;
            edges/=2;
            if(edges!=c)
            {
                cout<<"NO";
                return 0;
            }

        }
    }
    cout<<"YES";

    return 0;
}
