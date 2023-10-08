//
// Created by Mazen on 10/6/2023.
//
#include<bits/stdc++.h>

using namespace std;

int main() {
    long long n, m;
    cin >> n >> m;
    long long p=++n;
    for(long long k=10;;k*=10)
    {
        if(n%k>m)
        {
            break;
        }
        p=n-(n%k);
    }
    cout<<p-1;

    return 0;
}