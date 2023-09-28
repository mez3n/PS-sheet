//
// Created by Mazen on 9/26/2023.
//
#include<bits/stdc++.h>

using namespace std;
struct group{
    int first ;
    int second;
    int third;
};
bool sor(group a, group b) {
    return a.second > b.second;
}

int main() {
    int n, k;
    cin >> n;
    vector<group> vis(n);
    for (int i = 0; i < n; i++) {
        cin >> vis[i].first >> vis[i].second;
        vis[i].third=i+1;
    }
    cin >> k;
    vector<int> tables(k);
    for (int i = 0; i < k; i++) {
        cin >> tables[i];
    }
    sort(vis.begin(), vis.end(), sor);
    vector<int> out(n,-1);
    int money = 0;
    int count = 0;
    for (int i = 0; i < n; i++) {
        int mn = INT_MAX;
        int index = -1;
        for (int j = 0; j < k; j++) {
            if (tables[j] != -1) {
                int diff = tables[j] - vis[i].first;
                if (diff >= 0) {
                    if(diff<mn) {
                        index = j;
                        mn=diff;
                    }
                }
            }
        }
        out[vis[i].third-1] = index;
        if (index != -1) {
            count++;
            money += vis[i].second;
            tables[index] = -1;
        }
    }
    cout << count << " " << money << endl;
    for (int i = 0; i <n; i++) {
        if (out[vis[i].third-1] != -1) {
            cout << vis[i].third << " " << out[vis[i].third-1]+1 << endl;
        }
    }


    return 0;
}
