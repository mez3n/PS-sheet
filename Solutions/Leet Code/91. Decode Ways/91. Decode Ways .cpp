//
// Created by Mazen on 11/24/2023.
//
#include<bits/stdc++.h>

using namespace std;
unordered_set<string> st;
int cnt = 0;
int mem[109];

int rec(string &s, int i) {
    if (i == s.size()) {
        return 1;
    }
    int &ret = mem[i];
    if (ret != -1) {
        return ret;
    }
    if (s[i] != '0') {
        ret = rec(s, i + 1);
        if (i + 1 < s.size() && st.count(s.substr(i, 2))) {
            ret += rec(s, i + 2);
        }
    }
    return ret;
}


int iterative(string s) {
    mem[s.size()] = 1;
    int dp1=1,dp2=0;
    for (int i = s.size() - 1; i >= 0; i--) {
        int dp=0;
        if (s[i] != '0') {
            dp+=dp1;
            if (i + 1 < s.size() && st.count(s.substr(i, 2))) {
                dp+=dp2;
            }
        }
        dp2=dp1;
        dp1=dp;
    }
    return dp1;
}

int main() {
    for (int i = 1; i <= 9; i++) {
        st.insert(to_string(i));
    }
    for (int i = 0; i <= 9; i++) {
        st.insert("1" + to_string(i));
    }
    for (int i = 0; i <= 6; i++) {
        st.insert("2" + to_string(i));
    }
    string s;
    cin >> s;
  //  memset(mem, 0, sizeof mem);

    //   m += rec(s, 0);
    cout << iterative(s);

    return 0;
}