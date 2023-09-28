/* CF680-D2-B.cpp
20/07/2023   
19/19/09
--------------------------------------------- */
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int k ;
  cin>>k;
  k--;
  vector<int> arr(n);
  for(int i =0;i<n;i++)
  {
    cin>>arr[i];
  }
    int j=k+1,z=k-1;
    int count=0;
    if(arr[k]==1)
    count++;
    while(j<n&&z>=0)
    {
        if((arr[j]==1&&arr[z]==1))
        {
            count+=2;
        }
        j++;
        z--;
    }
    while(j<n)
    {
        if(arr[j]==1)
        {
            count++;
        }
        j++;
    }
     while(z>=0)
    {
        if(arr[z]==1)
        {
            count++;
        }
        z--;
    }

    cout<<count;






   return 0;
}