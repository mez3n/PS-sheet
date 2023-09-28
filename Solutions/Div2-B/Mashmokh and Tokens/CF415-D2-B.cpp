//
// Created by Mazen on 9/18/2023.
//
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    double a,b;
    cin>>n>>a>>b;
    for(int i =0;i<n;i++)
    {
        long long x;
        cin>>x;
        long long y =x*(a/b);
        long long out=x-y*(b/a);
        cout<<out<<" ";
    }








   return 0;
}
