/* CF16-D2-B.cpp
20/07/2023   
19/40/48
--------------------------------------------- */
#include<bits/stdc++.h>
using namespace std;
struct cont{
long long no;
long long size;
};




int main()
{
    long long size ,n;
    cin>>size>>n;
    vector<cont>arr(n);
    long long x,y;
    for(long long i =0;i<n;i++)
    {
        cin>>arr[i].no>>arr[i].size;
    }
   for(long long i=0;i<n-1;i++)
   {
    long long index = i;
    for(long long j=i+1;j<n;j++)
    {
        if(arr[j].size<arr[index].size)
        {
            index=j;
        }
    }
    cont min = arr[index];
    arr[index]=arr[i];
    arr[i]=min;
   }
   
    long long sum=0;
    n--;
    while(size>0)
    {
        size--;

        if(arr[n].no==0)
        n--;
        if(n<0)
        {
            break;
        }

        sum+=arr[n].size;
        arr[n].no--;
        
        
    }
    cout<<sum;
  






   return 0;
}