//
// Created by Mazen on 8/25/2023.
//
#include<bits/stdc++.h>

using namespace std;
int factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    int j=n-1;
    while(j>0)
    {
        n*=j;
        j--;
    }
    return n;
}
int main() {
    string s1, s2;
    cin >> s1 >> s2;
    int sum1 = 0, sum2 = 0, unknown = 0;
    for (int i = 0; i < s1.length(); ++i) {
        sum1 += (s1[i] == '+');
        sum1 -= (s1[i] == '-');
    }
    for (int i = 0; i < s2.length(); ++i) {
        sum2 += (s2[i] == '+');
        sum2 -= (s2[i] == '-');
        unknown += (s2[i] == '?');
    }
    if(unknown==0)
    {
        if(sum1==sum2)
        cout<<"1.000000000000";
        else
        cout<<"0.000000000000";
        return 0;
    }
    int i=sum1-sum2+unknown;
    if(i%2==0&& i/2>=0 && i/2<=unknown)
    {
        i/=2;
        int ans= factorial(unknown)/ ((factorial(i)* factorial(unknown-i)));
        cout<<setprecision(12)<<double (ans/pow(2,unknown));

    }
    else
    cout<<"0.000000000000";




    return 0;
}