/* Mountain_Scenery_CF218-D2-A.cpp
22/06/2023   
12/44/09
--------------------------------------------- */
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  int k;
  cin>>n>>k;
  int * arr = new int [2*n+2];
    for(int i=1;i<2*n+2;i++)
    {
        cin>>arr[i];
    }
  for(int i =2;i<2*n+1;i++)
  {
    if(i%2==0)
    {
    if((arr[i]>arr[i-1]+1)&&(arr[i]>arr[i+1]+1))
    {
        arr[i]--;
        k--;
        if(k==0)
        {
            break;
        }
    }
    }
  }
  for(int i =1;i<2*n+2;i++)
  {
    cout<<arr[i]<<" ";
  }







   return 0;
}