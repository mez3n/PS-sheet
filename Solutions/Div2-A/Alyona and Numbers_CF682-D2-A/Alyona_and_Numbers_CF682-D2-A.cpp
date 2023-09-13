/* Alyona_and_Numbers_CF682-D2-A.cpp
21/06/2023   
17/56/24
--------------------------------------------- */
#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long min;
  long long max;
  cin>>min>>max;
  if(min>max)
  {
    long long temp =min;
    min=max;
    max=temp;
  }
  long long min_5=min/5;
  long long max_5=max/5;
  long long count =0;

  count +=max_5*min;
  int excess_max = max-max_5*5;
  int excess_min=min-min_5*5;
  if(excess_max==1||excess_max==4)
  {
    count+=min_5;
  }
  else if(excess_max!=0)
  {
    count+=2*min_5;
  }
  if(excess_min==1||excess_min==4)
  {
    count+=max_5;
  }
  else if(excess_max!=0)
  {
    count+=2*max_5;
  }

if(min%5!=0)
{
  if((max+min)%5==0)
  {
    count++;
  }
}
  cout<<count;






   return 0;
}