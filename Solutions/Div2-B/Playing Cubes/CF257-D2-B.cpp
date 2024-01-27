//
// Created by Mazen on 10/29/2023.
//
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n ,m;
    cin>>n>>m;
    int temp = min(n,m);
    n=max(n,m);
    m=temp;
    int petya,vasya;
    petya=m-1;
    vasya=m;
    petya+=n-m;
    cout<<petya<<" "<<vasya;








   return 0;
}