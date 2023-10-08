//
// Created by Mazen on 10/1/2023.
//
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>arr1(n);
    vector<int>arr2(n);
    string s1,s2;
    for(int i =0;i<n;i++)
    {
        cin>>arr1[i]>>arr2[i];
        s1+='0';
        s2+='0';
    }
    for(int k=0;2*k<=n;k++)
    {
        int j;
        for(j=k-1;j<k;j++)
        {
            if(j>=0) {
                s1[j] = '1';
                s2[j] = '1';
            }
        }
        int m=j;
        int l=2*k;
        if(k==0)
        while(l!=n)
        {
            if(arr1[j]<arr2[m])
            {
                s1[j]='1';
                j++;
            }else{
                s2[m]='1';
                m++;
            }
            l++;
        }
    }
    cout<<s1<<endl<<s2;







   return 0;
}