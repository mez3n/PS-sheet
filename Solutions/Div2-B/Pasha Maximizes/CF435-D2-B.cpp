//
// Created by Mazen on 9/25/2023.
//
#include<bits/stdc++.h>

using namespace std;

void swap(char &a, char &b) {
    char temp = a;
    a = b;
    b = temp;
}

int main() {
    string s;
    int k;
    cin >> s >> k;
    int j = 0;
    char mx = '0';
    int sz = s.length();
    while (k > 0&&j<s.length()) {
        int index = -1;
        mx=s[j];
        for (int i = j+1; i < sz; i++) {
            if (s[i] > mx) {
                mx = s[i];
                index = i;
            }
        }
        if(index==-1)
        {
            j++;
            sz=s.length();
            continue;
        }
        if (k - (index-j) >= 0) {
            k =k-(index-j);
            for (int z = index; z > j; z--) {
                swap(s[z], s[z - 1]);
            }
            j++;
            sz=s.length();
        } else {
            sz = index;
        }
    }
    cout << s;


    return 0;
}