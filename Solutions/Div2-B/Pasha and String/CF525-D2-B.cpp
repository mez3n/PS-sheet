//
// Created by Mazen on 9/26/2023.
//
#include<bits/stdc++.h>

using namespace std;

void swap(char &a, char &b) {
    char temp = a;
    a = b;
    b = temp;
}

int main() {
    string s;
    cin >> s;
    int m;
    cin >> m;
    vector<int> arr(s.length()/2+1,0);
    for (int k = 0; k < m; k++) {
    int x;
    cin>>x;
    arr[x]++;
    }
    for(int i=0;i<s.length()/2;i++)
    {
        arr[i+1]+=arr[i];
    }
    for(int i =0;i<s.length()/2+1;i++)
    {
        if(arr[i]%2!=0)
        {
            swap(s[i-1],s[s.length()-i]);
        }
    }
    cout << s;


    return 0;
}