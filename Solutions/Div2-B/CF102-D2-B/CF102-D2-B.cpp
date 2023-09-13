/* CF102-D2-B
25/07/2023   
19/58/51
--------------------------------------------- */
#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s;
   cin>>s;
   long long sum=0;
   if(s.length()==1)
   {
      cout<<0;
      return 0;
   }
   int count=0;
   while(s.length()>1)
   {
      count++;
      sum=0;
      int i =0;
      while(i<s.length())
      {
         sum+=s[i]-'0';
         i++;
      }
      s=to_string(sum);
   }
   cout<<count;




   return 0;
}