//
// Created by Mazen on 10/15/2023.
//
#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    bool valid = 0;
    int count = 0;
    int out = 1;
    bool one = false, zero = false;
    for (int i = 0; i < n - 1; i++) {
        if (s[i] == '1' || s[i + 1] == '1') {
            one = true;
        }
        if (s[i] == '0' || s[i + 1] == '0') {
            zero = true;
        }
        if (s[i] == s[i + 1]) {

            if (valid) {
                if(count==0) {
                    count++;
                }else{

                }
            }
            valid = false;
        } else {
            out++;
            valid = true;
        }
    }
    if (!zero || !one) {
        count+=2;
    }
    cout << out + count;


    return 0;
}