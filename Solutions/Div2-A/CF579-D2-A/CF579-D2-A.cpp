/* CF579-D2-A.cpp
03/07/2023   
17/52/35
--------------------------------------------- */
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  string s="";
  while(n>=1)
  {
    if(n/2==n/2.0)
    {
        s+='0';
    }
    else
    {
        s+='1';
    }
    n/=2;
  }
  int count=0;
  for(int i=0;i<s.length();i++)
  {
    if(s[i]=='1')
    {
        count++;
    }
  }
  cout<<count;






   return 0;
}