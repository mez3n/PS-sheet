//
// Created by Mazen on 10/4/2023.
//
#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
           cin>>arr[i];
    }

    for(int k=1;k<=n/3;k++)
    {
       if(n%k==0)
       {
           for(int m=0;m<k;m++)
           {
               int sum=0;
               for(int v=m;v<n;v+=k)
               {
                   if(arr[v])sum++;
               }
               if(sum==n/k)
               {
                   cout<<"YES";
                   return 0;
               }
           }
       }
    }
    cout<<"NO";



    return 0;
}