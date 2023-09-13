//
// Created by Mazen on 8/27/2023.
//
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    set<int>arr ;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        arr.insert(x);
    }

    auto x=arr.begin();
    auto y=--arr.end();
    if(arr.size()<3)
    {
        cout<<"YES";
        return 0;
    }
   if(arr.size()>3)
   {
       cout<<"NO";
       return 0;
   }
   if(arr.size()==3)
   {
       auto mid=x;
       mid++;

       if(*y-*mid==*mid-*x)
       {
           cout<<"Yes";
           return 0;
       }
       else
       {
           cout<<"NO";
           return 0;
       }

   }







   return 0;
}
