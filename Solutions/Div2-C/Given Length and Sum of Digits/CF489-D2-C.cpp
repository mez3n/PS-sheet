//
// Created by Mazen on 10/12/2023.
//
#include<bits/stdc++.h>

using namespace std;
int m, sum;
string mn = "z";
string mx = "-1";
string s = "";

int getsum(string s) {
    int sum = 0;
    for (int i = 0; i < s.length(); i++) {
        sum += (s[i] - '0');
    }
    return sum;
}

void rec(string s) {
    if (s.length() == m) {
        int total = getsum(s);
        if (total == sum && s[0] != '0') {
            if (s < mn) {
                mn = s;
            }
            if (s > mx) {
                mx = s;
            }
        }
    } else
        for (int i = 0; i <= 9; i++) {
            rec(s + to_string(i));
        }
}

int main() {

    cin >> m >> sum;
    rec(s);
    mn = mn == "z" ? "-1" : mn;
    cout << mn << " " << mx;


    return 0;
}