//
// Created by Mazen on 10/8/2023.
//
#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int sum = 0;
    bool first = true;
    int cnt;
    for (int i = 0; i < n; i++) {
        cnt = 1;
        while (arr[i] != 1 && i < n) {
            i++;
            cnt++;
        }
        if (i == n) {
            break;
        }
        if (first) {
            sum++;
        } else if (cnt < 2) {
            sum += cnt;
        } else {
            sum += 2;
        }
        first = false;
    }
    cout << sum;


    return 0;
}