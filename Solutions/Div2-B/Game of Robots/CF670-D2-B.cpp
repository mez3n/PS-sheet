//
// Created by Mazen on 10/16/2023.

#include<bits/stdc++.h>
using namespace std;
int main()
{
int n ,k;
cin>>n>>k;
vector<int> arr(n+1);
for(int i=1;i<=n;i++) {
    cin >> arr[i];

}

for(int i=0;i<n;i++)
{
if(i>=k)
{
    break;
}
k-=i;
}

cout<<arr[k];





   return 0;
}
