//
// Created by Mazen on 9/27/2023.
//
#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    if (n % 2 != 0) {
        for (int i = 0; i < n; i++) {
            cout << i << " ";
        }
        cout << endl;
        for (int i = 0; i < n; i++) {
            cout << i << " ";
        }
        cout<<endl;
        for (int i = 0; i < n; i++) {
            cout << 2*i%n << " ";
        }
    } else {
        cout << -1;
    }


    return 0;
}