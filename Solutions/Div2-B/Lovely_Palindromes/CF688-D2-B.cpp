/* CF688-D2-B.cpp
30/07/2023   
22/04/48
--------------------------------------------- */
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    string s;
    string sub;
    cin>>s;
    bool x=false;
    if((s.length()%2)==0)
    {
         sub =s.substr(s.length()/2-1,s.length()/2);
    
    for(int i =0;i<s.length()/2;i++)
    {
        if(s[i]!=sub[sub.length()-1-i]);
        {
            x=true;
            break;
        }
    }
    if(!x)
    {
        cout<<s;
    }
    }
    
    cout<<s;
    for(int i =0;i<s.length();i++)
    {
        cout<<s[s.length()-1-i];
    }
        
    

   
    
  






   return 0;
}