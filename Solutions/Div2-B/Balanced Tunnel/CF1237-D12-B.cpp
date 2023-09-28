//
// Created by Mazen on 9/24/2023.
//
#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> arr1(n);
    vector<int> arr2(n);
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> arr2[i];
    }
    set<int> fined;
    /*for (int i = 0; i < n; i++) {
        if (arr2[i] == arr1[j]) {
            j++;
            continue;
        }
        while (fined.count(arr1[j]) == 1) {
            j++;
        }
        if(arr2[i]!=arr1[j])
        {
            fined.insert(arr2[i]);
        }
    }*/
    int i=0 ,j=0;
    while(j!=n)
    {
        if(arr1[i]==arr2[j])
        {
            i++;j++;
        }
        else if(arr1[i]!=arr2[j])
        {
            if((fined.count(arr2[j])==0)&&fined.count(arr1[i])==0)
            {
                fined.insert(arr2[j]);
                j++;
            }
            else
            {
                i++;
            }
        }
    }
    cout<<fined.size();
    return 0;
}