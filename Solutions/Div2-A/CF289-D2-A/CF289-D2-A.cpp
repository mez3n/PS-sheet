/* CF289-D2-A
26/06/2023   
17/16/19
--------------------------------------------- */
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int* arr = new int [2*n];
   int k;
   cin>>k;
   for(int i =0;i<2*n;i++)
   {
      cin>>arr[i];
   }
   int count=0;
   for(int i =0;i<2*n;i+=2)
   {
      count+= arr[i+1]-arr[i]+1;
   }
   int min= count%k;
   if (min==0)
   {
      cout<<min;
   }
   else
   {
      cout<<abs(k-min);
   }






   return 0;
}