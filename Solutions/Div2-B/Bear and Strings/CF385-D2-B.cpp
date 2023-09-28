//
// Created by Mazen on 9/7/2023.
//
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    vector<int> arr;
    for(int i =0;i<s.length();++i)
    {
        if(s[i]=='b'&&s[i+1]=='e'&&s[i+2]=='a'&&s[i+3]=='r')
        {
            arr.push_back(i+1);
        }
    }
    int sum=0;
    if(!arr.empty()) {
        int oldindex=1;
        for (int i = 0; i < arr.size(); i++) {
            sum += (s.length() -2-arr[i])*(arr[i]-oldindex+1);
            oldindex=arr[i]+1;
        }
    }
    cout<<sum;







   return 0;
}