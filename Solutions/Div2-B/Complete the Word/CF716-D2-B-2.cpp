//
// Created by Mazen on 9/16/2023.
//
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int undefined = 0;
    bool valid = false;
    int count = 0;
    int j = 0;
    set<char>arr;
    for(int i =0;i<s.length();i++)
    {
        undefined=0;
        arr.clear();
        if(s.length()-i<26)
        {
            break;
        }
        for(int j=0;j<26;j++)
        {
            if(s[i+j]=='?')
            {
                undefined++;
            }
            else
            {
                arr.insert(s[i+j]);
            }
        }
        for(char C='A';C<='Z';C++)
        {
            if(arr.count(C)==1)
            {
                count++;
            }
        }
        if(undefined+count==26)
        {
            j=i;
            break;
        }
    }
    for(int i=0;i<26;i++)
    {
        
    }







   return 0;
}

 */