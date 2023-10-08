//
// Created by Mazen on 9/30/2023.
//
#include<bits/stdc++.h>

using namespace std;

struct op{
    int l,r,d;
};
int main() {
    int n, m, k;
    cin>>n>>m>>k;
    vector<long long> arr(n+1);
    vector<op> oper(m+1);
    vector<long long>mp(100009,0);
    for(int i =1;i<=n;i++)
    {
        cin>>arr[i];
    }
    for(int i =1;i<=m;i++)
    {
        cin>>oper[i].l>>oper[i].r>>oper[i].d;
    }

    for(int i =0;i<k;i++)
    {
      int x,y;
      cin>>x>>y;
      mp[x]++;
      mp[y+1]--;
    }
    vector<long long>uses(m+1,0);
    for(int i =1;i<=m;i++)
    {
        uses[i]=uses[i-1]+mp[i];
    }
    vector<long long> updates(n+2,0);
    for(int i=1;i<=m;i++)
    {
        updates[oper[i].l]+=uses[i]*oper[i].d;
        updates[oper[i].r+1]-=uses[i]*oper[i].d;
    }
    vector<long long> amount(n+1,0);
    for(int i=1;i<=n;i++)
    {
        amount[i]+=amount[i-1]+updates[i];
    }
    for(int i=1;i<=n;i++)
    {
        arr[i]+=amount[i];
    }

    for(int i=1;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }


    return 0;
}