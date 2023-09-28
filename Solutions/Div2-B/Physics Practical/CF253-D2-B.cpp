/*//
// Created by Mazen on 9/10/2023.
// db mem is broken another solution 
#include<bits/stdc++.h>
#define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
using namespace std;
int n;
vector<int>arr;
int mem[5009][5009];
int db (int front , int back){
    int & ret= mem[arr[front]][arr[back]];
    if(arr[back]<=2*arr[front])
    {
        return 0;
    }
    else if(ret!=-1)
    {
        return ret;
    }
    else
    {
        ret=min(1+db(front+1,back),1+db(front,back-1));
    }
    return ret;
}
int main()
{
  //  TxtIO;

   memset(mem,-1 ,sizeof (mem));
    cin>>n;
    for(int i=0;i<n;++i)
    {
        int x;
        cin>>x;
        arr.push_back(x);
    }
    sort(arr.begin(),arr.end());


    //cout<<db(0,n-1);









   return 0;
}*/