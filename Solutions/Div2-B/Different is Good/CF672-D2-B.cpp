//
// Created by Mazen on 10/9/2023.
//
#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    bool arr[26];
    memset(arr, false, sizeof arr);
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (!arr[s[i] - 'a']) {
            arr[s[i] - 'a'] = true;
        } else {
            count++;
        }
    }
    int temp = 0;
    for (auto x: arr) {
        if (!x) {
            temp++;
        }
    }
    if (count >temp) {
        cout << -1;
    } else {
        cout << count;
    }


    return 0;
}