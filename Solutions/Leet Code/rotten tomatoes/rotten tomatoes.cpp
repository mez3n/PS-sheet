#include<bits/stdc++.h>

using namespace std;

int main() {

    int n ;
    int m ;
    cin>>n>>m;
    vector<vector<int>> grid(n,vector<int>(m));
    for(int i =0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>grid[i][j];
        }
    }
    int dirx[] = {0, 0, 1, -1};
    int diry[] = {1, -1, 0, 0};
    queue<pair<int, int>> q;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == 2) {
                q.push(make_pair(i, j));
            }
        }
    }

    int len = q.size();
    int count_rotten = 0;
    int cycles = 0;
    while (!q.empty()) {
        pair<int, int> cur = q.front();
        q.pop();
        len--;
        for (int k = 0; k < 4; k++) {
            int x = dirx[k] + cur.second;
            int y = diry[k] + cur.first;
            if (x >= 0 && x < m && y >= 0 && y < n) {
                if (grid[y][x] == 1) {
                    count_rotten++;
                    grid[y][x] = 2;
                    q.push(make_pair(y, x));
                }
            }
        }
        if (len == 0) {
            len = q.size();
            cycles++;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == 1) {
                return -1;
            }
        }
    }


    cout << max(0,cycles-1) << " " << count_rotten;
   return max(0,cycles-1);



}