//
// Created by Mazen on 10/12/2023.
//
#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
     cin>>arr[i];
    }
    int sum=0;
    for(int i =0;i<n-1;i++)
    {
        int walks=arr[i]+arr[i+1];
        if(walks<k)
        {
            arr[i+1]+=k-walks;
            sum+=k-walks;
        }
    }
    cout<<sum<<endl;
    for(int i =0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }


    return 0;
}