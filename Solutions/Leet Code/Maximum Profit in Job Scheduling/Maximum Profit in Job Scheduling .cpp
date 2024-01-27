//
// Created by Mazen on 12/24/2023.
//
#include<bits/stdc++.h>

using namespace std;
struct task {
    int start;
    int end;
    int profit;
};

bool sor(task a, task b) {
    return a.start < b.start;

}

int mem[50009];

int rec(int i, int last, vector<task> &arr) {
    if (i == arr.size()) {
        return 0;
    }
    int &ret = mem[i];
    if (ret != -1) {
        return ret;
    }
    if (arr[i].start < last) {
        return rec(i + 1, last, arr);
    } else {
       int m = rec(i + 1, arr[i].end, arr) + arr[i].profit;
        ret = max(m, rec(i + 1, last, arr));
    }
    return ret;
}

int main() {
    int n;
    cin >> n;
    vector<task> arr(n);
    memset(mem, -1, sizeof mem);
    for (int i = 0; i < n; i++) {
        cin >> arr[i].start;
    }
    for (int i = 0; i < n; i++) {
        cin >> arr[i].end;
    }
    for (int i = 0; i < n; i++) {
        cin >> arr[i].profit;
    }
    sort(arr.begin(), arr.end(), sor);
    cout << rec(0, 0, arr);
    return 0;
}
