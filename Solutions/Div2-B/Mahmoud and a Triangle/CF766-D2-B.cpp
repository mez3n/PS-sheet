/* CF766-D2-B.cpp
05/08/2023   
10/35/39
--------------------------------------------- */
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  vector<int>arr(n);
  
  for(int i=0;i<n;i++)
  {    
    cin>>arr[i];
  }
    if(arr.size()<3)
    {
        cout<<"no";
        return 0;
    }
 
  sort(arr.begin(),arr.end());
  
  vector<int>::iterator s1 = arr.begin();
  vector<int>::iterator s2 = s1+1;
  vector<int>::iterator l = s2+1;

  while(true)
  {
    if(*s1+*s2>*l)
    {
        cout<<"YES";
        return 0;
    }
    if((l==arr.end()-1))
    {
        break;
    }
    if(*l>=*s1+*s2)
    {
        s1++;
        s2++;
        l++;
      
    }
    

  }

  cout<<"NO";






   return 0;
}