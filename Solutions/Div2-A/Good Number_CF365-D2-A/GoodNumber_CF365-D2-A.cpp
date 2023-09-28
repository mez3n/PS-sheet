/* Good Number_CF365-D2-A.cpp
21/06/2023   
15/08/31
--------------------------------------------- */
#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,k;
int count=0;
cin>>n>>k;
string * s= new string [n];
for(int i =0;i<n;i++)
{
    cin>>s[i];
    bool* arr= new bool [k+1] {false};
    for(int j =0;j<s[i].length();j++)
    {
     
     if(k<(s[i][j]-'0'))
     continue;
     arr[s[i][j]-'0']=true;
    }
    int z=0;
    while(z<=k&&arr[z])
    {
       z++;
    }
    if(z==k+1)
    {
        count++;
    }
}
cout<<count;







   return 0;
}