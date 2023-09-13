/* CF382-D2-A.cpp
22/06/2023   
15/58/00
--------------------------------------------- */
#include<bits/stdc++.h>
using namespace std;
int main()
{
  char c;
  string s,left,right,free,result;
  bool pan = true; //true for left
  cin>>s;
  for(int i =0;i<s.length();i++)
  {
    if(s[i]=='|')
    {
        pan = false;
        continue;
    }
    if(pan)
    {
        left+=s[i];
    }
    else
    {
        right+=s[i];
    }
  }
  cin>>free;
  
  int count = free.length();
  int initial= count;
  while(count!=0)
  {
   
        if(left.length()>right.length())
        {
            right+=free[initial-count];
            count--;
        }
        else if(right.length()>left.length())
        {
            left+=free[initial-count];
            count--;
        }
        else
        {
            if(count%2!=0)
            {
                cout<<"Impossible";
                return 0;
            }
            else
            {
             left+=free[initial-count];
             count--;
             right+=free[initial-count];
             count--;
            }
        }
       
    
  }



if(left.length()==right.length()&&count==0)
  {
    cout<<left<<'|'<<right;
  }
  else
  {
        cout<<"Impossible";
  }


   return 0;
}