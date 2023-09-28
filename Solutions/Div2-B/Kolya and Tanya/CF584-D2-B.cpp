//
// Created by Mazen on 9/13/2023.
//
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long max=1000000000+7;
    int n ;
    cin>>n;
    long long no=3*n;
    long long ex=(no-1)-2*n+1;
    unsigned long long out =1;
    for(int i =0;i<no;i++)
    {
     out =out*3%max;
    }
    unsigned long long minus=1;
    for(int i =0;i<ex;i++)
    {
        minus =minus*7%max;
    }
    cout<<(out-minus+max)%max<<endl;







   return 0;
}