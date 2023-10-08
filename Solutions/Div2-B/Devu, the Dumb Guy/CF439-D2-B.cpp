//
// Created by Mazen on 10/7/2023.
//
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k;
    cin>>n>>k;
    long long arr[100009];
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    long long sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i]*max(k--,(long long)1);
    }
    cout<<sum;





   return 0;
}