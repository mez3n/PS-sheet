//
// Created by Mazen on 9/22/2023.
//
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int k =0;
    long long sum =0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='4')
        {
            k=2*k+1;
        }
        else{
            k=2*k+2;
        }
    }
    cout<<k;







   return 0;
}