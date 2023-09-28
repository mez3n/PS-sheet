/* Counterexample_CF483-D2-A.cpp
20/06/2023   
17/13/16
--------------------------------------------- */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
 long long r;
 long long l;
 cin>>r>>l;
 if(r%2!=0)
 {
  r++;
 }
 if(l-r<2)
 {
  cout<<-1;
  return 0;
 }
 cout<<r<<" "<<r+1<<" "<<r+2;

 
  
  





   return 0;
}