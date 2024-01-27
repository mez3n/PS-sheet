//
// Created by Mazen on 11/25/2023.
//
#include<bits/stdc++.h>

using namespace std;

int mem[109];

int rec(vector<int> &nums, int i) {
    if (i >= nums.size()) {
        return 0;
    }
    int &ret = mem[i];
    if (ret != -1) {
        return ret;
    }
    ret = max(rec(nums, i + 1), rec(nums, i + 2) + nums[i]);
    return ret;
}

int iterative(vector<int> &nums) {
    memset(mem, 0, sizeof mem);
    mem[1] = nums[0];
    for (int i = 1; i < nums.size(); i++) {
        mem[i + 1] = max(mem[i], mem[i - 1] + nums[i]);
    }
    return mem[nums.size()];
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    memset(mem, -1, sizeof mem);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    cout << iterative(nums);


    return 0;
}