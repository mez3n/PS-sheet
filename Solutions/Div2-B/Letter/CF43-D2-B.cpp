//
// Created by Mazen on 10/14/2023.
//
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    getline(cin,s);
    getline(cin,t);
    vector<int> arr (260,0);
    for(int i =0;i<s.length();i++)
    {
        if(s[i]==' ')
        {
            continue;
        }
       arr[s[i]]++;
    }
    for(int i =0;i<t.length();i++)
    {
        if(t[i]==' ')
        {
            continue;
        }
        if(arr[t[i]]==0)
        {
            cout<<"NO";
            return 0;
        }
        arr[t[i]]--;
    }
    cout<<"YES";






   return 0;
}