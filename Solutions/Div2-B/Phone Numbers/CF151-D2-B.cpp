//
// Created by Mazen on 10/9/2023.
//
#include<bits/stdc++.h>

using namespace std;
struct guy {
    string name;
    int a, b, c;
};

int main() {
    int n;
    cin >> n;
    string s, temp;
  vector<guy> arr(n);
    for (int k = 0; k < n; k++) {
        int t;
        cin >> t;
        string name;
        cin >> name;
        arr[k].name=name;
        for (int i = 0; i < t; i++) {
            s = "z";
            cin >> temp;
            s += temp;
            bool taxi=true;
            for (int j = 1; j < s.length(); j++) {
                if (j % 3 != 0) {
                    if (s[1] != s[j]) {
                        taxi= false;
                        break;
                    }
                }
            }
            if(taxi)
            {
                arr[k].a++;
                continue;
            }
            bool pizza=true;
            int last=0;
            for (int j = 1; j < s.length(); j++) {
                if (j % 3 != 0) {
                    if (s[j] >= s[last]) {
                        pizza= false;
                        break;
                    }
                    last=j;
                }
            }
            if(pizza)
            {
                arr[k].b++;
                continue;
            }
            arr[k].c++;
        }
    }
    int mxa=-1,mxb=-1,mxc=-1;
    string inda,indb,indc;
    for(auto x:arr)
    {
        if(x.a>mxa)
        {
            mxa=x.a;
            inda=x.name;
        }
        if(x.b>mxb)
        {
            mxb=x.b;
            indb=x.name;
        }
        if(x.c>mxc)
        {
            mxc=x.c;
            indc=x.name;
        }
    }
    cout<<"If you want to call a taxi, you should call: "<<inda;
    for(auto x:arr)
    {
        if(x.a==mxa&&inda!=x.name)
        {
          cout<<", "<<x.name;
        }
    }
    cout<<"."<<endl;
    cout<<"If you want to order a pizza, you should call: "<<indb;
    for(auto x:arr)
    {
        if(x.b==mxb&&indb!=x.name)
        {
            cout<<", "<<x.name;
        }
    }
    cout<<"."<<endl;
    cout<<"If you want to go to a cafe with a wonderful girl, you should call: "<<indc;
    for(auto x:arr)
    {
        if(x.c==mxc&&indc!=x.name)
        {
            cout<<", "<<x.name;
        }
    }
    cout<<"."<<endl;


    return 0;
}