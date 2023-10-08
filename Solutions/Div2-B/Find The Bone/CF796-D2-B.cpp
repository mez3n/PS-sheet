//
// Created by Mazen on 10/7/2023.
//
#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    unordered_map<int,bool> holes;
    for (int i = 1; i < m + 1; i++) {
        int x;
        cin >> x;
        holes[x] = true;
    }
    int last = 1;
    for (int i = 0; i < k; i++) {
        int x, y;
        cin >> x >> y;
        if(holes[last])
        {
           break;
        }else if(last==x)
        {
            last=y;
        }else if(last==y)
        {
            last=x;
        }
    }


    cout << last;


    return 0;
}