//
// Created by Mazen on 9/14/2023.
//
#include<bits/stdc++.h>

using namespace std;
int ans = 0;

bool shuffle(string &s, char m[], string &t, set<int> &index, int ind) {
    if (ind == t.length()) {
        cout << m << endl;
        ans++;
        if (m == t) {
            return true;
        } else {
            return false;
        }
    }
    for (int i = 0; i < t.length(); i++) {
        set<int> curindex = index;
        if (index.count(i) == 0) {
            curindex.insert(i);
            m[ind] = s[i];
            bool x = shuffle(s, m, t, curindex, ind + 1);
            if (x) {
                // return x;
            }

        }
    }
    return false;
}

int main() {
    string s, t;
    int ind = 0;
    set<int> index;
    cin >> s;
    t = s;
    char m[t.length()];
    shuffle(s, m, t, index, ind);
    cout << ans;


    return 0;
}