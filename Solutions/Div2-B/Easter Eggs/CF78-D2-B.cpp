/* CF78-D2-B
26/07/2023   
20/36/23
--------------------------------------------- */
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  vector<char> arr ={'G','B','I','V'};
  string s="ROYGBIV";
  int index=0;
  for(int i=0;i<n-7;i++)
  {
   s+=arr[index%4];
   index++;
  }
  cout<<s;






   return 0;
}