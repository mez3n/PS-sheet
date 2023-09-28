//
// Created by Mazen on 9/22/2023.
//
#include<bits/stdc++.h>

using namespace std;
struct frien {
    long long mon;
    long long fri;
};

bool sortfriend(frien a, frien b) {
    return a.mon < b.mon;
}

int main() {
    long long n, d;
    cin >> n;
    cin >> d;
    vector<frien> arr(n);
    for (long long i = 0; i < n; i++) {
        cin >> arr[i].mon >> arr[i].fri;
    }
    sort(arr.begin(), arr.end(), sortfriend);
    long long mn;
    long long sum=0;
    long long out =0;
    mn=arr[0].mon;
    int r=0,l=0;
    while(r!=arr.size())
    {
        if(arr[r].mon-mn<d)
        {
            sum+=arr[r].fri;
            r++;
        }
        else
        {
            out=max(sum,out);
            sum-=arr[l].fri;
            l++;
            mn=arr[l].mon;
        }
    }
    out=max(sum,out);
    cout<<out;


    return 0;
}
