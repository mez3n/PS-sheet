//
// Created by Mazen on 10/2/2023.
//
#include<bits/stdc++.h>

using namespace std;
long long mod;
long long power (int n , int num)
{
    if(n==0)
    {
        return 1;
    }
    else{
        long long res =power(n/2,num)%mod;
        res=(res*res)%mod;
        if(n%2!=0)
        {
            res=res*num%mod;
        }
        return res;
    }
}
int main() {

    long long n;
    cin >> n >> mod;
    int out =power(n,3)-1;
    if(out<0)
    {
        out+=mod;
    }
    cout<<out;

    return 0;

}