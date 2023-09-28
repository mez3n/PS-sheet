//
// Created by Mazen on 9/1/2023.
#include<bits/stdc++.h>
using namespace std;
void func (long long n)
{
    cout<<n<<" ";
    if(n==1)
    {
        return;
    }
    if(n%2==0)
    {
        func(n/2);
    }
    else
    {
        func((3*n)+1);
    }
}

void perm (int i ,int n,int vis[],int cur[])
{
    if(i==n)
    {
        for(int j=0;j<n;j++)
        {
            cout<<cur[j]<<" ";
        }
        cout<<endl;
        return ;
    }
    for(int j=0;j<n;j++)
    {
        vis[j]=1;
        cur[i]=j;
        perm(i+1,n,vis,cur);
        vis[j]=0;
    }


}
int main()
{
    int n;
    cin>>n;
    int * cur=new int [n];
    int * vis=new int [n]{0};
    perm ( 0 ,n,vis, cur);





   return 0;
}