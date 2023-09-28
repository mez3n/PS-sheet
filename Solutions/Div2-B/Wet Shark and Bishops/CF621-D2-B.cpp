//
// Created by Mazen on 9/21/2023.
//
#include<bits/stdc++.h>

using namespace std;

int fact(int n) {
    int j = n;
    while (n--) {
        j *= n;
    }
    return max(j, 1);
}

int gcd(int a, int b) {
    while (a != b) {
        if (a > b) {
            a -= b;
        } else {
            b -= a;
        }
    }
    return a;
}

int main() {
    int n;
    cin >> n;
    map<int,int>m1;
    map<int,int>m2;
    long long out=0;
    for(int i =0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        out+=m1[x+y];
        m1[x+y]++;
        out+=m2[x-y];
        m2[x-y]++;
    }
    cout<<out;







    return 0;
}
