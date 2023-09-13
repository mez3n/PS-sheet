//
// Created by Mazen on 9/11/2023.
//
#include<bits/stdc++.h>

using namespace std;

int main() {
    int m, n;
    cin >> n >> m;
    int arr[20009];
    memset(arr,-1,sizeof(arr));
    queue<int> q;
    arr[n]=0;
    q.push(n);
    while(!q.empty())
    {
        int cur=q.front();
        q.pop();
        if(cur==m)
        {
            cout<<arr[m];
            return 0;
        }
        int a=2*cur;
        if(a<2e4&&arr[a]==-1)
        {
            q.push(a);
            arr[a]=arr[cur]+1;
        }
        int b=cur-1;
        if(cur>=0&&arr[b]==-1)
        {
            arr[b]=arr[cur]+1;
            q.push(b);
        }

    }





    return 0;
}