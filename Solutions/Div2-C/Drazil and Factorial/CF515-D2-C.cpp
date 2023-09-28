//
// Created by Mazen on 9/27/2023.
//
#include<bits/stdc++.h>

using namespace std;


string out="";

string ret(char a) {

    string b;
    if (a == '0' || a == '1') {
        return b="";
    } else if (a == '2') {
        return b="2";
    }else if (a == '3') {
        return b="3";
    }else if (a == '4') {
        return b="223";
    }else if (a == '5') {
        return b="5";
    }else if (a == '6') {
        return b="53";
    }else if (a == '7') {
        return b="7";
    }else if (a == '8') {
        return b="7222";
    }else if (a == '9') {
        return b="7332";
    }
    return b;
}



int main() {
    int n;
    string s;
    cin>>n;
    cin >> s;

    for(int i =0;i<n;i++)
    {
        out+=ret(s[i]);
    }
    sort(out.begin(),out.end(),greater<>());
    cout<<out;


    return 0;
}