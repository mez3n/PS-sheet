//
// Created by Mazen on 9/9/2023.
//
#include<bits/stdc++.h>
using namespace std;
int mem[1000001];
int getd(int n) {
    if(mem[n]!=-1)
    {
        return mem[n];
    }
    int c = 0;
    for (int i = 1;i*i<= n;++i) {
        if (n % i == 0) {
            c++;
            if (i * i != n) {
                c++;
            }
        }
    }
    mem[n]=c;
    return c;
}





int main()
{
    memset(mem,-1,sizeof (mem));
   int x;
   vector<int>arr(3);
   int count=0;
    cin>>arr[0];
    cin>>arr[1];
    cin>>arr[2];
    for(int i =1;i<=arr[0];i++)
    {
        for(int j=1;j<=arr[1];j++)
        {
            for(int z=1;z<=arr[2];z++)
            {
             count+=getd((i*j*z));
            }
        }
    }
    cout<<count;
   return 0;
}