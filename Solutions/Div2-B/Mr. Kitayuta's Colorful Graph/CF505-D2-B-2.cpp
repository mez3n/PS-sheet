//
// Created by Mazen on 9/13/2023.
//
#include<bits/stdc++.h>

using namespace std;
vector<pair<int, int>> arr[101];
bool visited[101];
bool cvisited[101];
void dfs(int &ans, int x, int y, int col) {
    visited[x] = true;
    if (x == y) {
        ans++;
        return;
    }
    for (auto u: arr[x]) {
        if (u.second == col&&!visited[u.first]) {
            dfs(ans, u.first, y, u.second);
        }

    }
}

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int x, y, z;
        cin >> x >> y >> z;
        arr[x].push_back(make_pair(y, z));
        arr[y].push_back(make_pair(x, z));
    }
    int qui;
    cin >> qui;
    while (qui--) {
        int x, y;
        int ans = 0;
        cin >> x >> y;

        for (auto u: arr[x]) {

            if (!cvisited[u.second]) {
                cvisited[u.second]=true;
                dfs(ans, u.first, y, u.second);
                memset(visited,false,sizeof visited);
            }
        }
        memset(cvisited,false,sizeof cvisited);
        cout<<ans<<endl;
    }


    return 0;
}
