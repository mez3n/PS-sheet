//
// Created by Mazen on 10/5/2023.
//
#include<bits/stdc++.h>
using namespace std;
bool vis [100009];
vector<int>arr[100009];
vector<int> cats(100009);
int transverse(int i,int streak,int m)
{
    vis[i]=true;
    if(cats[i]==0)
    {
        streak=0;
    }
    else{
        streak++;
    }
    if(streak>m)
    {
        return 0;
    }
    bool loop =false;
    int sum=0;
    for(auto x:arr[i])
    {
        if(!vis[x]) {
            loop = true;
            sum += transverse(x, streak, m);
        }
    }
    return !loop+sum;
}
int main()
{
    int n ,m;
    cin>>n>>m;
    memset (vis, false,sizeof vis);
    for(int i =1;i<=n;i++)
    {
        cin>>cats[i];
    }
    for(int i =0;i<n-1;i++)
    {
        int x,y;
        cin>>x>>y;
        arr[x].push_back(y);
        arr[y].push_back(x);
    }
    cout<<transverse(1,0,m);







   return 0;
}