/* CF287-D2-A.cpp
02/07/2023   
13/04/53
--------------------------------------------- */
#include<bits/stdc++.h>
using namespace std;
int main()
{
  char arr [17];
  for(int i=1;i<17;i++)
  {
    cin>>arr[i];
  }
  int sum_hash='#'+'#'+'#'+'#';
  int sum_dot= '.'+'.'+'.'+'.';
  for(int i=1;i<=11;i++)
  {
    if(i%4==0)
    {
        continue;
    }
    int sum = arr[i]+arr[i+1]+arr[i+4]+arr[i+5];
    if(sum==sum_hash||sum==sum_hash-'#'+'.'||sum==sum_dot||sum==sum_dot-'.'+'#')
    {
        cout<<"YES";
        return 0;
    }
  }
  cout<<"NO";







   return 0;
}