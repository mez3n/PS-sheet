//
// Created by Mazen on 9/19/2023.
//
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n ;
    cin>>n;
    int* arr=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    multiset<int>s;
    int j=0,diff,ans=0,mx,mn;
    for(int i =0;i<n;i++)
    {
        s.insert(arr[i]);
        mn=*s.begin();
        mx=*s.rbegin();
        diff=mx-mn;
        while(diff>1)
        {
            s.erase(s.find(arr[j]));
            j++;
            mn=*s.begin();
            mx=*s.rbegin();
            diff=mx-mn;
        }
        ans=max(ans,i-j+1);
    }
    cout<<ans<<endl;







   return 0;
}