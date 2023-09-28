//
// Created by Mazen on 9/17/2023.
//
#include<bits/stdc++.h>
using namespace std;
long long n,l,r,x;
long long arr[16];
long long ans=0;
void rec(int i , long long max1, long long min1,long long total)
{
    if(i==n&&max1-min1>=x&&total>=l&&total<=r)
    {
        ans++;
    }
    if(i==n)
    {
        return ;
    }
    rec(i+1,max1,min1,total);
    rec(i+1,max(max1,arr[i]),min(min1,arr[i]),total+arr[i]);

}
int main()
{
    cin>>n>>l>>r>>x;
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    rec(0,LONG_LONG_MIN,LONG_LONG_MAX,0);
    cout<<ans;







   return 0;
}