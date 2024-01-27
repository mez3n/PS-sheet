//
// Created by Mazen on 1/6/2024.
//
#include<bits/stdc++.h>

using namespace std;
int mem[109][109];

int rotate(multimap<char, int> &mp, string &key, int i, int pos, int n) {
    if (i == key.length()) {
        return 0;
    }
    int &ret = mem[pos][i];
    if (ret != -1) {
        return ret;
    }
    ret = INT_MAX;
    auto range = mp.equal_range(key[i]);
    for (auto it = range.first; it != range.second; ++it) {
        int dest = it->second;
        int dist = min((pos - dest + n) % n, (dest - pos + n) % n);
        ret = min(ret, rotate(mp, key, i + 1, dest, n) + dist+1);
    }
    return ret;
}

int main() {

    string ring, key;
    cin >> ring >> key;
    multimap<char, int> mp;
    memset(mem, -1, sizeof mem);
    for (int i = 0; i < ring.length(); i++) {
        mp.insert(make_pair(ring[i], i));
    }
    cout << rotate(mp, key, 0, 0, ring.length());


    return 0;
}