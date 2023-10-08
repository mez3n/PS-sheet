//
// Created by Mazen on 10/1/2023.
//
#include<bits/stdc++.h>
using namespace std;
int mem [50]{-1};
int rec (int n)
{
    int&ret =mem[n];
    if(n<0) {
        ret= 0;
    }else if(n==0) {
        ret=1;
    }else if(ret!=-1)
    {
        return ret;
    }else{
        ret=rec(n-2)+rec(n-1);
    }
    return ret;

}
int main()
{
    int n ;
    cin>>n;
    cout<<rec(n);
    vector<int> arr(50,-1);







   return 0;
}