//
// Created by Mazen on 10/11/2023.
//
#include<bits/stdc++.h>
using namespace std;
int arr[3][3];
int main()
{
  for(int i=0;i<3;i++)
  {
      for(int j=0;j<3;j++)
      {
          cin>>arr[i][j];
      }
  }
  int r1,i2,i3;
  for(int i =0;i<100001;i++)
  {
      r1=i+arr[0][1]+arr[0][2];
      i2=r1-arr[1][0]-arr[1][2];
      i3=r1-i2-i;
      if(i3+arr[2][0]+arr[2][1]==r1)
      {
          arr[0][0]=i;
          arr[1][1]=i2;
          arr[2][2]=i3;
          break;
      }
  }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }






   return 0;
}