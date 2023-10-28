//
// Created by Mazen on 10/12/2023.
//
#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, t, c;
    cin >> n >> t >> c;
    int out=0;
    int x,last=0;
    for(int i =0;i<n;i++)
    {
        cin>>x;
        if(x>t)
        {
           out+=max(i-last-c+1,0);
           last=i+1;
        }
    }
    out+=max(n-last-c+1,0);
    cout<<out;


    return 0;
}