//
// Created by Mazen on 11/26/2023.
//
#include<bits/stdc++.h>
#define int_max  100000;
using namespace std;
int mem [10009];
int rec(int n)
{
    if(n==0)
    {
        return 0;
    }
    int& ret=mem[n];
    if(ret!=-1)
    {
        return ret;
    }
    int mn =int_max;
    for(int i =1;i*i<=n;i++){
        mn=min(mn,rec(n-i*i));
    }
    ret=mn+1;
    return mn+1;
}
int main()
{
    memset(mem,-1,sizeof mem);
    cout<<rec(12);







   return 0;
}