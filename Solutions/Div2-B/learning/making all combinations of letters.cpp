//
// Created by Mazen on 9/14/2023.
//
#include<bits/stdc++.h>

using namespace std;
int ans = 0;
unordered_set<string> outs;
bool shuffle(string &s, char m[], string &t, set<int> &index, int ind,int size) {
    if (ind == size) {
        outs.insert(m);
        ans++;
        if (m == t) {
            return true;
        } else {
            return false;
        }
    }
    for (int i = 0; i < size; i++) {
        set<int> curindex = index;
        if (index.count(i) == 0) {
            curindex.insert(i);
            m[ind] = s[i];
            bool x = shuffle(s, m, t, curindex, ind + 1,size);
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
    for(int i =0;i<s.length();i++) {
        string temp=s+s[i];
        shuffle(temp, m, t, index, ind,4);
    }
    int count=0;
    for(auto x:outs) {
        count++;
        cout << x << endl;
    }
    cout<<count;


    return 0;
}