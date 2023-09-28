//
// Created by Mazen on 9/25/2023.
//
#include<bits/stdc++.h>

using namespace std;
pair<int, int> arr[1000009];
int n;
long long s1 = 0, s2 = 0;
int main() {

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i].first >> arr[i].second;
    }
    for(int i =0;i<n;i++)
    {
        if (s2+arr[i].second - s1 < 500) {
            s2 += arr[i].second;
            cout<<'G';
        } else{
            s1 += arr[i].first;
            cout<<'A';
        }
    }

    return 0;
}