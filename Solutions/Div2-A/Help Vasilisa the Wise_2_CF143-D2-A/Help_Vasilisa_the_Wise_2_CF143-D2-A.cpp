/* Help_Vasilisa_the_Wise_2_CF143-D2-A.cpp
22/06/2023   
13/06/12
--------------------------------------------- */
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r1,r2,c1,c2,d1,d2;
    cin>>r1>>r2>>c1>>c2>>d1>>d2;
   
  for(int i =1;i<=9;i++)
  {
   for(int j =1;j<=9;j++)
  {
   for(int z =1;z<=9;z++)
  {
   for(int k =1;k<=9;k++)
  {
    if(i!=j&&i!=z&&i!=k&&j!=z&&j!=k&&z!=k)
    {
    if((i+j==r1)&&(z+k==r2)&&(i+z==c1)&&(j+k==c2)&&(i+k==d1)&&(j+z==d2))
    {
        cout<<i<<" "<<j<<endl<<z<<" "<<k;
        return 0;
    }
    }
  } 
  } 
  } 
  }
  cout<<-1;






   return 0;
}