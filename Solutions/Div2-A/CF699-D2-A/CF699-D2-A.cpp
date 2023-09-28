/* CF699-D2-A.cpp
22/06/2023   
16/27/29
--------------------------------------------- */
#include<bits/stdc++.h>
using namespace std;
int main()
{
  
int n;
cin>>n;
string s;
cin>>s;
int * arr = new int [n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
int min = INT_MAX ;
if(n>=2)
{
for(int i =0;i<n;i++)
{
        if(s[i]=='R'&&s[i+1]=='L')
        {
            
            int time = ((arr[i+1]-arr[i])/2);
            if(time<min)
            {
                min=time;
            }
            
    }
}
}
if(min==INT_MAX)
cout<<"-1";
else
cout<<min;


   return 0;
}