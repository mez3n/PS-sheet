//
// Created by Mazen on 11/16/2023.
//
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        bool x = false;
        int freq = -1;
        for (int i = 1; i < n; i++) {

            int a = 0, b = 0;
            if (x) {
                break;
            }
            freq = -1;
            x = true;
            for (int j = 0; j < n; j++) {
                if (s[j] == 'A') {
                    a++;
                } else if (s[j] == 'B') {
                    b++;
                }
                if (j % i == 0) {
                    if (freq == -1) {
                        freq = max(a, b);
                    } else {
                        if (max(a, b) != freq||freq==1) {
                            x = false;
                            break;
                        }
                    }
                    a = 0;
                    b = 0;
                }
            }
        }
        if(!x)
        {
            cout<<'?'<<endl;
            return 0;
        }
        int a = 0, b = 0;
        int j = 0;
        int wa = 0, wb = 0;
        while (j != n) {
            while (max(a, b) != freq) {
                if (s[j] == 'A') {
                    a++;
                } else {
                    b++;
                }
                j++;
            }
            if (a > b) {
                wa++;
            } else {
                wb++;
            }
            a = 0;
            b = 0;
        }
        if (wa > wb) {
            cout << "A" << endl;
        } else {
            cout << "B" << endl;
        }


    }


    return 0;
}