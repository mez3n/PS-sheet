//
// Created by Mazen on 9/21/2023.
//
#include<bits/stdc++.h>

using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    int  t0 = 0, t1 = 0;
    long long count = 0;
    vector<int> arr0(t.size());
    vector<int> arr1(t.size());
    for (int i = 0; i < t.length(); i++) {
        if (t[i] == '0') {
            t0++;
            if (i > 0) {
                arr0[i] = arr0[i - 1] + 1;
                arr1[i] = arr1[i - 1];
            } else {
                arr0[0] = 1;
                arr1[0] = 0;
            }
        } else {
            t1++;
            if (i > 0) {
                arr1[i] = arr1[i - 1] + 1;
                arr0[i] = arr0[i - 1];
            } else {
                arr1[0] = 1;
                arr0[0] = 0;
            }
        }
    }
    for (int i = 0; i < s.length(); i++) {
        int r = s.length() - i - 1;
        r=t.length()-r-1;
        if (s[i] == '0') {
            count += t1 - (i>0?arr1[i-1]:0) -(arr1[t.length()-1]- arr1[r]);
        } else {
            count += t0 - (i>0?arr0[i-1]:0) - (arr0[t.length()-1]-arr0[r]);
        }
    }
    cout<<count;

    return 0;
}