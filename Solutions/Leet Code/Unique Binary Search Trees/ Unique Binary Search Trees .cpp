//
// Created by Mazen on 11/25/2023.
//
#include<bits/stdc++.h>
using namespace std;
int mem[30];

int rec(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    int & ret=mem[n];
    if(ret!=-1)
    {
        return ret;
    }
    ret=0;
    for(int i =1;i<=n;i++)
    {
       ret+= rec(n-i)*rec(i-1);
    }
    return ret;
}
int iterative(int n )
{
    memset(mem,0,sizeof mem);
    mem[0]=1;
    mem[1]=1;
    for(int i =2;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            mem[i]+=mem[i-j]*mem[j-1];
        }
    }
    return mem[n];
}
int main() {
    int n;
    cin >> n;
    memset(mem,-1,sizeof mem);
    cout<<iterative(n);


    return 0;
}