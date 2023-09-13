//
// Created by Mazen on 9/6/2023.
//
#include<bits/stdc++.h>
using namespace std;
int n ,m,x,y;
int arr[1009]{0};
int memo [1009][1009][3];
int solve (int col,int wid,int last){
    int &ret=memo[col][wid][last];
    if(col==m)
    {
        if(wid<x||wid>y)
        {
            ret=100000000;
        }
        else
        ret =0;
    }
    else{
        if(ret!=-1)
        {
            return ret;
        }
        int dots = 1000000;
        if(col==0||(wid+1<=y&&last==0)||(wid>=x&&last==1))
        {
            dots=(n-arr[col])+solve(col+1,(last==0)?wid+1:1,0);
        }
        int hashes = 1000000;
        if(col==0||(wid+1<=y&&last==1)||(wid>=x&&last==0))
        {
            hashes=arr[col]+solve(col+1,(last==1)?wid+1:1,1);
        }
        ret=min(dots,hashes);
    }
    return ret;
}
int main()
{
cin>>n>>m>>x>>y;
for(int i =0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        char l;
        cin>>l;
        if(l=='.')
        {
            arr[j]++;
        }

    }
}
memset(memo,-1,sizeof(memo));
cout<<solve(0,0,2);





   return 0;
}