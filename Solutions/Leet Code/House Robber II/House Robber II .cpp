//
// Created by Mazen on 12/24/2023.
//
#include<bits/stdc++.h>

using namespace std;
int mem[109][2];

int rob(int i, vector<int> nums, bool first) {
    if (i > nums.size()&&first) {
        return INT_MIN;
    }
    if (i >= nums.size()) {
        return 0;
    }
    int &ret = mem[i][first];
    if (ret != -1) {
        return ret;
    }
    if (i == 0) {
        ret = max(nums[i] + rob(i + 2, nums, true), rob(i + 1, nums, first));
    } else {
        ret = max(nums[i] + rob(i + 2, nums, first), rob(i + 1, nums, first));
    }
    return ret;

}

int main() {

    int n;
    cin >> n;
    vector<int> nums(n);
    memset(mem,-1,sizeof mem);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    cout<<  rob(0, nums, false);

    return 0;
}