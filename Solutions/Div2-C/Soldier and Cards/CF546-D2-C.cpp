//
// Created by Mazen on 9/27/2023.
//
#include<bits/stdc++.h>

using namespace std;

int main() {
    queue<int> q1;
    queue<int> q2;
    int n;
    cin >> n;
    int n1, n2;
    cin >> n1;
    for (int i = 0; i < n1; i++) {
        int x;
        cin >> x;
        q1.push(x);
    }
    cin >> n2;
    for (int i = 0; i < n2; i++) {
        int x;
        cin >> x;
        q2.push(x);
    }
    int count=0;
    queue<int> backup1;
    queue<int> backup2;
    backup1.push(-1);
    backup2.push(-1);
    while (!q1.empty() && !q2.empty()) {
        count++;
        int x1 = q1.front();
        q1.pop();
        int x2 = q2.front();
        q2.pop();
        if (x1 > x2) {
            q1.push(x2);
            q1.push(x1);
        } else {
            q2.push(x1);
            q2.push(x2);
        }
        if(q1==backup1||q2==backup2)
        {
            cout<<"-1";
            return 0;
        }
        if(count%1000==0)
        {
            backup2=q2;
            backup1=q1;
        }
    }
    cout<<count<<" ";
    if(q1.empty())
    {
        cout<<2;
    }else
    {
        cout<<1;
    }


    return 0;
}