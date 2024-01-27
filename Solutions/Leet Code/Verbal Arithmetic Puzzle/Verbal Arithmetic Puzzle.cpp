//
// Created by Mazen on 11/16/2023.
//
#include<bits/stdc++.h>

using namespace std;
unordered_map<char, int> mp;
vector<bool> vis(10, false);

int calc(string s) {
    int ans = 0;
    int k = 1;
    for (int i = s.size() - 1; i > -1; i--, k *= 10) {
        ans += k * mp[s[i]];
    }
    return ans;
}

bool rec(vector<string> &words, string&result, int i, vector<char> &chars) {

    if (i == chars.size()) {
        int res = calc(result);
        int sum = 0;
        for (auto s: words) {
            sum += calc(s);
        }
        if (sum == res) {
            return true;
        }
        return false;
    }

    for (int j = 0; j <= 9; j++) {
        if (!vis[j]) {
            mp[chars[i]] = j;
            vis[j] = 1;
            if (rec(words, result, i + 1, chars)) {
                return true;
            }
            mp[chars[i]] = -1;
            vis[j] = 0;
        }

    }
    return false;
}

int main() {
    //vector<string> words = {"SIX", "SEVEN", "SEVEN"};
    //string result = "TWENTY";
    //vector<string> words = {"SEND", "MORE"};
   // string result = "MONEY";
    vector<string> words = {"LEET", "CODE"};
    string result = "POINT";
    unordered_set<char> st;
    for (auto x: result) {
        st.insert(x);
    }
    for (auto x: words) {
        for (auto c: x) {
            st.insert(c);
        }
    }
    vector<char> chars;
    for (auto x: st) {
        chars.push_back(x);
    }
    cout << rec(words, result, 0, chars);


    return 0;
}