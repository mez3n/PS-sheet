//
// Created by Mazen on 9/19/2023.
//
#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    string arr;
    long long count0 = 0;
    string s = "";
    string pre="1";
    for (int i = 0; i < n; i++) {
        cin >> arr;
        if (arr == "0") {
            cout << 0;
            return 0;
        }
        if (arr == "1") {
            continue;
        }
        bool valid = false;
        if (arr[0] == '1') {
            valid = true;
        }
        for (int j=1; j < arr.length(); j++) {
            if (arr[j] != '0') {
                valid = false;
                break;
            }
        }
        if (valid) {
            s += arr.substr(1);
        } else {
            pre = arr;
        }
    }
    cout << pre << s << endl;


    return 0;
}