/* Dice_Tower_CF225-D2-A
21/06/2023   
17/14/02
--------------------------------------------- */

#include<bits/stdc++.h>
using namespace std;
int main()
{
struct dice{
int up,left,right,In_up,In_left,In_right;
 };
int n;
cin>>n;
dice* arr=new dice [n];
  cin>>arr[0].up>>arr[0].left>>arr[0].right;
  arr[0].In_up=7-arr[0].up;
  arr[0].In_left=7-arr[0].left;
  arr[0].In_right=7-arr[0].right;
for(int i=1;i<n;i++)
{
  cin>>arr[i].left>>arr[i].right;
  arr[i].In_left=7-arr[i].left;
  arr[i].In_right=7-arr[i].right;
  arr[i].up=7-arr[i-1].In_up;
  arr[i].In_up=arr[i-1].up;
  if(arr[i].up==arr[i].left||arr[i].up==arr[i].In_left||arr[i].up==arr[i].In_right||arr[i].up==arr[i].right)
  {
   cout<<"NO";
   return 0;
  }


}
cout<<"YES";




   return 0;
}