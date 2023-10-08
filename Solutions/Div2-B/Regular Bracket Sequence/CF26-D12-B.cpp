//
// Created by Mazen on 10/8/2023.
//
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s ;
    cin>>s;
    stack<char> st1;
    queue<char>q1;
    int count=0;
    int mx=0;
    for(auto c:s)
    {
        if(c=='(') {
            st1.push(c);
        }else
        {
            if(st1.empty())
            {

            }else
            {
                count++;
                st1.pop();
            }
        }
    }
    mx=max(count,mx);
    cout<<2*mx;










   return 0;
}