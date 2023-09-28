//
// Created by Mazen on 9/12/2023.
// solution not working


/*#include<bits/stdc++.h>

using namespace std;
vector<vector<set<int>>> graph(101, vector<set<int>>(101, set<int>()));
bool visited[104][104];
int ret=0;
void dfs(int last,int n, int m, set<int> &colors) {
    if (n == m) {
        ret+= colors.size();
        return;
    }
    visited[last][n] = true;
    visited[n][last] = true;
    if (colors.size() == 0) {
        return ;
    }
    int ind = 0;
    bool valid = true;
    while (valid) {
        while (graph[n][ind].empty()) {
            ind++;
            if (ind >= 101) {
                valid = false;
                break;
            }
        }
        if (!visited[n][ind] && valid) {

            set<int> nextcolors = colors;
            for (auto &j: colors) {
                if (graph[n][ind].count(j) == 0) {
                    nextcolors.erase(j);
                }
            }
            dfs(n,ind, m, nextcolors);
        }
        ind++;
    }
    return;

}

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int x, y, z;
        cin >> x >> y >> z;
        graph[x][y].insert(z);
        graph[y][x].insert(z);
    }
    int qui;
    cin >> qui;
    set<int> colors;
    for (int i = 0; i < qui; i++) {
        for (int j = 1; j < 102; j++) {
            colors.insert(j);
        }
        memset(visited, false, sizeof(visited));
        int x, y;
        cin >> x >> y;
        dfs(0,x, y, colors);
        cout << ret << endl;
        ret=0;
    }


    return 0;
} */