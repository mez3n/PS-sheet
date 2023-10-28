//
// Created by Mazen on 10/20/2023.
//
#include<bits/stdc++.h>

using namespace std;

int choose(int n, int k) {
    if(k>n)
    {
        return 0 ;
    }
    if (k == 0)
        return 1;
    return (n * choose(n - 1, k - 1)) / k;
}

int main() {
    int n, d;
    cin >> n >> d;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        auto upper= std::upper_bound(arr.begin(), arr.end(),arr[i]+d);
        upper--;
        long long x=(upper-arr.begin())-i;
        sum+= x*(x-1)*0.5;
    }
    cout << sum;


    return 0;
}