/* Alyona_and_Numbers_CF682-D2-A.cpp
21/06/2023   
17/56/24
--------------------------------------------- */
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int min;
  int max;
  cin>>min>>max;
  if(min>max)
  {
    int temp =min;
    min=max;
    max=temp;
  }
  int min_5=min/5;
  int max_5=max/5;
  int count =0;
  if(min>=5)
     count += (min_5)*max_5*5;

  count+=(min-5*min_5)*max_5;
  count+=(max-5*max_5)*min_5;
  cout<<count;






   return 0;
}