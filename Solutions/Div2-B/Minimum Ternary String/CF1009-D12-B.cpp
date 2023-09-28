//
// Created by Mazen on 9/23/2023.
//
#include<bits/stdc++.h>

using namespace std;

void swap(char &a, char &b) {
    char temp = a;
    a = b;
    b = temp;
}

int main() {
    string s, temp = "";
    cin >> s;
    int j = 0;
    bool f2 = false;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '0' && !f2) {

            swap(s[j++], s[i]);

        }
        if (s[i] == '2') {
            f2 = true;
        }
    }
    int m = j;
    for (int i = m; i < s.length(); i++) {
        if (s[i] != '1') {
            temp += s[i];
        }
    }
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '1') {
            swap(s[i], s[m++]);
        }
    }
    int k = s.length() - 1;
    bool f0 = false;
    int l = 0;
    for (int i = m; i < s.length(); i++) {
        s[i] = temp[l++];
    }
    cout << s;


    return 0;
}