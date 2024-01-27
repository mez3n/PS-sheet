//
// Created by Mazen on 11/28/2023.
//
#include<bits/stdc++.h>

using namespace std;
int mem[2][1009][1009];

int rec(int i, vector<int> &prices, bool canbuy,int k) {
    if (i >= prices.size()) {
        return 0;
    }
    if(k==0)
    {
        return 0;
    }
    int &ret = mem[canbuy][i][k];
    if (ret!=-1)
    {
        return ret;
    }
    if (canbuy) {
        int curbuy = rec(i + 1, prices, false,k) - prices[i];
        int curskip = rec(i + 1, prices, true,k);
        ret = max(curbuy, curskip);
    } else {
        int cursell = rec(i + 1, prices, true,k-1) + prices[i];
        int curskip = rec(i + 1, prices, false,k);
        ret = max(cursell, curskip);
    }
    return ret;
}

int main() {
    memset(mem, -1, sizeof mem);
    vector<int> prices(7);
    for (int i = 0; i < 7; i++) {
        cin >> prices[i];
    }
    int k=2;
    cout << rec(0, prices, true,k);


    return 0;
}