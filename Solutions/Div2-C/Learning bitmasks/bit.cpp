//
// Created by Mazen on 10/26/2023.
//
#include<bits/stdc++.h>
using namespace std;
string convert_binary(int n)
{
    if(n==0)
    {
        return "";
    }
    return convert_binary(n>>1)+to_string(n&1);
}
int main()
{
    for(int i=0;i<100;i++) {
        string s = convert_binary(i);
        cout<<s<<endl;
    }









   return 0;
}