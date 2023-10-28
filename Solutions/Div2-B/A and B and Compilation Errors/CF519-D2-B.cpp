//
// Created by Mazen on 10/13/2023.
//
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<int,int> arr;
    map<int,int> arr1;
    map<int,int> arr2;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        arr[x]++;
    }
    for(int i=0;i<n-1;i++)
    {
        int x;
        cin>>x;
        arr1[x]++;
    }
    for(int i=0;i<n-2;i++)
    {
        int x;
        cin>>x;
        arr2[x]++;
    }
    for(auto x:arr)
    {
        if(arr[x.first]!=arr1[x.first])
        {
         cout<<x.first;
        }
    }
    cout<<endl;
    for(auto x:arr)
    {
        if(arr1[x.first]!=arr2[x.first])
        {
            cout<<x.first;
        }
    }








   return 0;
}