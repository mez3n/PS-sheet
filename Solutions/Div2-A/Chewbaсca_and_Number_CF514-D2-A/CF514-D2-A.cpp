/* Chewbaсca and Number_CF514-D2-A.cpp
22/06/2023   
13/36/58
--------------------------------------------- */
#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s;
   cin>>s;
   for(int i =0;i<s.length();i++)
   {
      if(s[i]-'0'>4)
      {
         s[i]=9-(s[i]-'0')+'0';
      }
      
   }

   if(s[0]=='0')
   {
      s[0]='9';
   }

   cout<<s;






   return 0;
}