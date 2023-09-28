//
// Created by Mazen on 9/24/2023.
//
#include<bits/stdc++.h>

using namespace std;

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

    long long a,b;
    cin>>a>>b;
    cout<<"YES"<<endl;
    for(long long i =a;i<=b;i+=2)
    {
        cout<<i<<" "<<i+1<<endl;
    }

    return 0;
}
