/* CF746-D2-B
27/07/2023   
18/24/50
--------------------------------------------- */
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   string s;
   cin>>s;
   vector<char> arr ;
   for(int i=0;i<n;i++)
   {
      if((n-i-1)%2==0)
      {
         arr.push_back(s[i]);
           
      }
      else{
         arr.insert(arr.begin(),s[i]);
      }
   }
   for(int i=0;i<n;i++)
   {
      cout<<arr[i];
   }
  






   return 0;
}