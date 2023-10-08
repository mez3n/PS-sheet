//
// Created by Mazen on 10/1/2023.
//
#include<bits/stdc++.h>

using namespace std;
struct tower {
    int val;
    int index;

};

bool operator<(const tower &a, const tower &b) {
    return a.val < b.val;
}

int main() {
    int n, k;
    cin >> n >> k;
    multiset<tower> arr;
    vector<pair<int, int>> out;
    for (int i = 0; i < n; i++) {
        tower x;
        cin >> x.val;
        x.index = i + 1;
        arr.insert(x);
    }
    int diff = INT_MAX;
    int org = 0;
    int j = 0;
    while (arr.begin()->val != arr.rbegin()->val && j < k) {
        j++;
        auto begin = arr.begin();
        auto end = arr.rbegin();
        tower x = *begin;
        x.val++;
        tower y = *end;
        y.val--;

        out.push_back(make_pair(end->index, begin->index));
        arr.erase(arr.begin());
        arr.erase(--arr.end());
        arr.insert(x);
        arr.insert(y);
        if (arr.rbegin()->val - arr.begin()->val < diff) {
            org = j;
            diff = arr.rbegin()->val - arr.begin()->val;
        }



    }
    auto begin = arr.begin();
    auto end = arr.rbegin();
    diff=diff==INT_MAX?0:diff;
    cout << diff << " " << org << endl;
    for (int i = 0; i < org; i++) {
        cout << out[i].first << " " << out[i].second << endl;
    }


    return 0;
}