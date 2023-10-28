//
// Created by Mazen on 10/10/2023.
//
#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    bool arr[5001];
    memset(arr,false,sizeof arr);
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if (!arr[x]) {
            if(x>n)
            {
                cnt++;
            }
            arr[x] = true;
        } else {
            cnt++;
        }
    }
    cout << cnt;


    return 0;
}