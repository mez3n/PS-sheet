/* CF492-D2-B_2.cpp
29/07/2023   
14/55/40
--------------------------------------------- */
#include<bits/stdc++.h>
using namespace std;
int diff(int a, int b)
{
    return abs(b-a);
}
int main()
{
int n,length;
cin>>n>>length;
vector<int>arr (n);
for(int i =0;i<n;i++)
{
    cin>>arr[i];
}  

sort(arr.begin(),arr.end());

double max =-1;
for(int i =0;i<n-1;i++)
{
    if(diff(arr[i],arr[i+1])/2.0>max)
    {
        max=diff(arr[i],arr[i+1])/2.0;
    }
}

if(arr[0]>max)
{
    max=arr[0];
}

if((length-arr[n-1])>max)
{
    max=length-arr[n-1];
}

cout<<setprecision(10)<<max;




   return 0;
}