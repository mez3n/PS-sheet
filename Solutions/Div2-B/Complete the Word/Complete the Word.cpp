//
// Created by Mazen on 9/16/2023.
//
#include<bits/stdc++.h>

using namespace std;

int main() {
    int arr[26]{0};
    string s;
    cin >> s;
    int undefined = 0;
    bool valid = false;
    int count = 0;
    int j = 0;
    for (int i = 0; i < s.length(); i++) {
        if (i >= 26) {
            if (s[i - 26] == '?') {
                s[i - 26] = 'A';
            }
        }

        if (s[i] == '?') {
            undefined++;
        } else {
            if (arr[s[i] - 'A'] == 1) {
                int temp=arr[s[i]-'A'];
                while(s[i]-'A'!=temp)
                {
                    i--;
                }
                memset(arr, 0, sizeof arr);
                undefined = 0;
                count = 0;
            } else {
                arr[s[i] - 'A']++;
                count++;
            }
        }

        if (count + undefined >= 26) {
            valid = true;
            j = i;
            break;
        }
    }

    if (valid) {
        for (int i = 0; i < 26; i++) {
            if (arr[i] == 0) {
                while (s[j - 25] != '?') {
                    j++;
                }
                s[j - 25] = char(i + 'A');
            }
        }
        for (int i = j - 25; i < s.length(); i++) {
            if (s[i] == '?') {
                s[i] = 'A';
            }
        }
        cout <<
             s;
    } else {
        cout << "-1";
    }


    return 0;
}