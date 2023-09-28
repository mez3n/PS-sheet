//
// Created by Mazen on 9/21/2023.
//
#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    long long sum1 = 0, sum2 = 0;
    long long mx1 = 0, mx2 = 0, last;
    vector<long long> arr1, arr2;
    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        if (x > 0) {
            sum1 += x;
            mx1 = max(mx1, x);
            arr1.push_back(x);
            last = 1;
        } else {
            x = abs(x);
            mx2 = max(x, mx2);
            sum2 += x;
            arr2.push_back(x);
            last = -1;
        }
    }
    bool valid = true;
    int breaker=0;
    for (int i = 0; i < min(arr1.size(), arr2.size()); i++) {
        if (arr1[i] != arr2[i]) {
            valid = false;
            if (arr1[i] > arr2[i]) {
                breaker = 1;
            } else {
                breaker = -1;
            }
            break;
        }
    }
    valid= false;
    if (sum1 > sum2) {
        cout << "first";
    } else if (sum1 < sum2) {
        cout << "second";
    } else {
        if (valid && arr1.size() > arr2.size()) {
            cout << "first";
        } else if (valid && arr1.size() < arr2.size()) {
            cout << "second";
        } else if (!valid && breaker == 1) {
            cout << "first";
        } else if (!valid && breaker == -1) {
            cout << "second";
        } else {
            if (last == 1) {
                cout << "first";
            } else if (last == -1) {
                cout << "second";
            }
        }
    }


    return 0;
}
