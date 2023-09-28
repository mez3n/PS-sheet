//
// Created by Mazen on 9/13/2023.
//
#include<bits/stdc++.h>

using namespace std;
vector<int> arr[51];
bool visited[51];

void dfs(long long &ans, int u) {
    visited[u] = true;
    for (auto x: arr[u]) {
        if (!visited[x]) {
            ans *= 2;
            dfs(ans, x);
        }
    }
    return;
}

int main() {
    int n, m;
    cin >> n >> m;
    while (m--) {
        int x, y;
        cin >> x >> y;
        arr[x].push_back(y);
        arr[y].push_back(x);
    }

    long long ans = 1;
    for (int i = 1; i <= n; i++) {
        for (auto u:arr[i])
        {
            if(!visited[u])
            {
                visited[i]=true;
                dfs(ans,u);
                ans*=2;
            }
        }
    }
    cout<<ans;


    return 0;
}