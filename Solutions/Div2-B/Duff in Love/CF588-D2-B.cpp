//
// Created by Mazen on 9/28/2023.
//
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    vector<long long>arr;
    for(long long i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            arr.push_back(i);
            if(i*i!=n)
            arr.push_back(n/i);
        }
    }
    sort(arr.begin(),arr.end(),greater<>());

    for(auto x:arr)
    {
        bool valid=true;
        for(long long i =2;i*i<=x;i++)
        {
            if(x%(i*i)==0)
            {
                valid= false;
            }
        }
        if(valid)
        {
            cout<<x;
            return 0;
        }
    }






   return 0;
}