//
// Created by Mazen on 9/17/2023.
//
#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, k, l, r, sk, sall;
    cin >> n >> k >> l >> r >> sall >> sk;
    vector<int> arr(n);
    int most = sk / k;
    int i=0;
    for (; i <k ; i++) {
            arr[i]+=most;
            sall-=most;
            sk-=most;
    }
    int j=0;
    while(sk!=0)
    {
        arr[j]++;
        sk--;
        sall--;
        j++;
        if(j==k)
        {
            j=0;
        }
    }
    if(n==k)
    {
        for(int m =0;m<n;m++)
        {
            cout<<arr[m]<<" ";
        }
        return 0;
    }
    int least=(sall)/(n-k);
    for(;i<n;i++)
    {
        arr[i]=least;
        sall-=least;
    }
    j=k;
    while(sall!=0)
    {
        arr[j]++;
        sall--;
        j++;
        if(j==n)
        {
            j=k;
        }
    }

    for(int m =0;m<n;m++)
    {
        cout<<arr[m]<<" ";
    }


    return 0;
}