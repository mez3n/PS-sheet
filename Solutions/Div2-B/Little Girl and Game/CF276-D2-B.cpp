//
// Created by Mazen on 9/25/2023.
//
#include<bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    int arr[26]{0};
    for (auto c: s) {
        arr[c - 'a']++;
    }
    int countodd = 0;
    for (int i = 0; i < 26; i++) {
        if (arr[i] % 2 != 0) {
            countodd++;
        }
    }
    if(countodd==0)
    {
        cout<<"First";
    }
    else if(countodd%2==0)
    {
        cout<<"Second";
    }
    else
    {
        cout<<"First";
    }


    return 0;
}