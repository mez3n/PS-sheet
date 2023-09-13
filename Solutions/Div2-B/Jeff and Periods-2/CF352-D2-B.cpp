//
// Created by Mazen on 9/7/2023.
//
#include<bits/stdc++.h>

using namespace std;
struct number {
    int p = -1;
    int last = -1;
};



int main() {

    map<int, number> arr;
    vector<int> out;
    int n;
    cin >> n;
    int count =0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        number &y=arr[x];

        if(y.p!=-2) {
            if (y.last != -1) {
                if (y.p == 0) {
                    y.p = i - y.last;
                    y.last = i;
                } else if (y.p != i - y.last) {
                    count -= count > 0 ? 1 : 0;
                    y.p = -2;
                    y.last = -2;
                } else {
                    y.last = i;
                }
            } else {
                count++;
                y.last = i;
                y.p=0;
            }
        }

    }
    cout<<count<<endl;
    for(auto it = arr.cbegin(); it != arr.cend(); ++it)
    {
        if(it->second.p>=0)
        cout<<it->first<<" "<<it->second.p<<endl;
    }






return 0;
}