//
// Created by Mazen on 9/14/2023.
//
#include<bits/stdc++.h>
using namespace std;

int main() {
    int s[26]{0};
    int t[26]{0};
    string strings;
    string stringt;
    cin >> strings;
    cin >> stringt;
    for (int i = 0; i < strings.length(); i++) {
        s[strings[i] - 'a']++;
    }
    for (int i = 0; i < stringt.length(); i++) {
        t[stringt[i] - 'a']++;
    }
    bool automation=false;
    for(int i =0;i<26;i++)
    {
        if(s[i]<t[i])
        {
            cout<<"need tree";
            return 0;
        }
        if(s[i]>t[i])
        {
            automation=true;
        }
    }
    int j=0;
    for(int i=0;i<strings.length();i++)
    {
        if(strings[i]==stringt[j])
            j++;
    }
    bool arr=false;
    if(j==stringt.length())
        arr=true;
    if(arr&&automation)
    {
        cout<<"automaton";

    }
    else if(automation)
    {
        cout<<"both";
    }
    else
    {
        cout<<"array";
    }


    return 0;
}