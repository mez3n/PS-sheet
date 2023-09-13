/* CF296-D2-A.cpp
02/07/2023   
13/22/35
--------------------------------------------- */
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int * arr= new int [1001] {0};
  int x;
  for(int i =0;i<n;i++)
  {
    cin>>x;
    arr[x]++;
  }
  int max=0;
  for(int i =0;i<1001;i++)
  {
    if(arr[i]>max)
    {
        max=arr[i];
    }
  }  
  if(max<=ceil(n/2.0))
  {
    cout<<"YES";
  }
  else
  {
    cout<<"NO";
  }




  delete arr;






   return 0;
}