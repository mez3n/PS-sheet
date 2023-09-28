/* CF47-D2-B.cpp
26/07/2023   
11/35/20
--------------------------------------------- */
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    string s [3];
    cin>>s[0];
    cin>>s[1];
    cin>>s[2];
    vector <int> arr (3,0) ;
    for(int i =0;i<3;i++)
    {
        if(s[i][1]=='>'){
            arr[s[i][0]-'A']++;
            arr[s[i][2]-'A']--;
        }
        else{
            arr[s[i][0]-'A']--;
            arr[s[i][2]-'A']++;
        }
    }
    if(arr[0]==arr[1]||arr[1]==arr[2]||arr[0]==arr[2])
    {
        cout<<"Impossible";
        return 0;
    }
    string out ="";
    int arr1[3];
   if(arr[0]>max(arr[1],arr[2]))
   {
    arr1[2]=0;
   }
   else if(arr[0]<min(arr[1],arr[2]))
   {
    arr1[0]=0;
   }
   if(arr[2]>max(arr[1],arr[0]))
   {
    arr1[2]=2;
   }
   else if(arr[2]<min(arr[1],arr[0]))
   {
    arr1[0]=2;
   } 
      if(arr[1]>max(arr[2],arr[0]))
   {
    arr1[2]=1;
   }
   else if(arr[1]<min(arr[2],arr[0]))
   {
    arr1[0]=1;
   } 
   arr1[1]=1+2-arr1[2]-arr1[0];


    for(int i=0;i<3;i++)
    {
        if(arr1[i]==0)
        {
            out+='A';
        }
        else if (arr1[i]==1)
        {
            out+='B';
        }
        else if(arr1[i]==2){
            out+='C';
        }
    }
    cout<<out;
    






   return 0;
}