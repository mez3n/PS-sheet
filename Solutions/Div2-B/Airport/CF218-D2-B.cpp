//
// Created by Mazen on 10/12/2023.
//
#include<bits/stdc++.h>

using namespace std;

int main() {

    int m, n;
    cin >> n >> m;
    multiset<int> arr;
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        arr.insert(x);
    }
    multiset<int> arr1(arr);
    int mn = 0;
    for (int i = 0; i < n; i++) {
        auto start = arr.upper_bound(0);
        int x = *start;
        mn += x;
        x--;
        arr.erase(start);
        arr.insert(x);
    }
    int mx = 0;
    for (int i = 0; i < n; i++) {
        auto end = --arr1.end();
        int x = *end;
        mx += x;
        x--;
        arr1.erase(--arr1.end());
        arr1.insert(x);
    }
    cout << mx << " "<<mn;


    return 0;
}