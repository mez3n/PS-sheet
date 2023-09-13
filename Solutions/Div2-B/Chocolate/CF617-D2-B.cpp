//
// Created by Mazen on 9/9/2023.
//
#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    vector<int> counts;
    int one =0;
    int count = -1;
    for (int i = 0; i < n; ++i) {
            if(arr[i]==1)
            {
                counts.push_back(count==-1?1:count);
                count=1;
                one++;
            }
            else if(count!=-1)
            {
                count++;
            }
    }
    if(one==1||one==0) {
        cout << one;
        return 0;
    }
    long long p=1;
    for(auto elem:counts)
    {
        p*=elem;
    }
    cout<<p;



    return 0;
}