//
// Created by Mazen on 1/7/2024.
//
#include<bits/stdc++.h>

using namespace std;
double mem[109][109];

double rec(vector<int> nums, int k, int i) {
    if (i == nums.size()) {
        return 0;
    }
    if (k == 0) {
        return INT_MIN;
    }
    double &ret = mem[k][i];
    if (ret != 0) {
        return ret;
    }
    int sum = 0;
    for (int j = i; j < nums.size(); j++) {
        sum += nums[j];
        double avg = sum / (j - i + 1.0);
        ret = max(ret, avg + rec(nums, k - 1, j + 1));
    }
    return ret;
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    memset(mem, 0, sizeof mem);
    cout << rec(nums, k, 0);


    return 0;
}