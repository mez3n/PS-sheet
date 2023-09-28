/* CF298-D2-A.cpp
03/07/2023   
17/25/44
--------------------------------------------- */
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
  int left=-1 ,right=-1;
  string s;
  cin>>s;
  for(int i =0;i<s.length();i++)
  {
    if(left==-1)
    {
        if(s[i]=='R')
        {
            left=i+1;
        }
         else if(s[i]=='L')
        {
            left=i+1;
        }
    }
    else
    {
        if(s[i]=='L')
        {
            right=i;
            break;
        }
        else if(s[i]=='R')
        {
            right=i+2;
        }
    }
  }
  cout<<left<<" "<<right;






   return 0;
}