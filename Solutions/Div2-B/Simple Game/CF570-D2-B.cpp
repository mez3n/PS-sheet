//
// Created by Mazen on 10/23/2023.
//
#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int diff= n-m;
    if(diff>=n/2)
    {
        if(diff==n/2&&n%2!=0)
        {
            cout<<max(m-1,1);
        }else
        cout<<min(m+1,n);
    }else
    {
        cout<<max(m-1,1);
    }

    return 0;
}