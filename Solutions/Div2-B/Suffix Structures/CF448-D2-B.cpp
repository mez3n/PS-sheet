//
// Created by Mazen on 9/14/2023.
// bad solution

/*
#include<bits/stdc++.h>
using namespace std;
//set <int>index;
bool shuffle(string&s,char m[],string&t,set<int>&index,int ind )
{
    if(ind==t.length())
    {
        cout<<m<<endl;
        if(m==t)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    set<int> curindex=index;
    for(int i=0;i<t.length();i++)
    {
        if(index.count(i)==0)
        {
            curindex.insert(i);
            m[ind]=s[i];
            bool x= shuffle(s,m,t,curindex,ind+1);
            if(x)
            {
                return x;
            }
        }
    }
    return false;
}
int main()
{
    string s,t;
    cin>>s>>t;
    bool needtree=false;
    bool found=false;
    for(int i=0;i<t.length();i++)
    {
        for(int j=0;j<s.length();j++)
        {
            if(t[i]==s[j])
            {
                found=true;
                break;
            }
        }
        if(!found)
        {
            cout<<"need tree";
            return 0;
        }
        found =false;
    }
    found =false;
    bool automation;
    set<char>setS;
    set<char>setT;
    for(int i =0;i<s.length();i++)
    {
        setS.insert(s[i]);
    }
    for(int i =0;i<t.length();i++)
    {
        setT.insert(t[i]);
    }
    for(int i=0;i<s.length();i++)
    {
        for(int j=0;j<t.length();j++)
        {
            if(t[j]==s[i])
            {

                found=true;
                break;
            }
        }
        if(!found)
        {
            automation =true;
            s.erase(i);
        }
    }
    if(s==t&&automation)
    {
        cout<<"automation";
        return 0;
    }
    int ind=0;
    set<int> index;
    char m [t.length()];
    shuffle(s,m,t,index,ind);








   return 0;
}
*/