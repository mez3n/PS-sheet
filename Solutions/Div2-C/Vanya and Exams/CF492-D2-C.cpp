//
// Created by Mazen on 9/26/2023.
//
#include<bits/stdc++.h>

using namespace std;

bool sortbyessays(pair<long long, long long> &a, pair<long long, long long> &b) {
    return a.second < b.second;
}

int main() {

    long long n, r, avg, sum = 0, count = 0;
    cin >> n >> r >> avg;
    vector<pair<long long, long long >> arr(n);
    for (long long i = 0; i < n; i++) {
        cin >> arr[i].first >> arr[i].second;
        sum += arr[i].first;
    }
    avg *= n;
    sort(arr.begin(), arr.end(), sortbyessays);

    for (long long i = 0; i < n; i++) {
        if (sum >= avg) {
            break;
        }
        unsigned long long diff = avg - sum;
        long long cur = r - arr[i].first;
        if (cur <= diff) {
            count += cur * arr[i].second;
            sum += cur;
        } else {
            count += arr[i].second * diff;
            sum += diff;
        }
    }
    cout << count;

    return 0;
}