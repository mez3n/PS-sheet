/* TOE1_Tic-Tac-Toe-1.cpp  stupid solution
07/08/2023   
11/46/09
--------------------------------------------- */
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
  vector<char> arr(9);
  for(int no =0;no<n;no++)
  {
    for(int i =0;i<9;i++)
    {
        cin>>arr[i];
    }
    int noO=0,noX=0;
    int i=0;
    bool valid = true;
   for(int i =0;i<9;i++)
   {
        if(arr[i]=='O')
        {
            noO++;
        }
        else if(arr[i]=='X')
        {
            noX++;
        }
   }
     if(noO>noX||noX-noO>1||(noO+noX==9&&noO>noX))
    {
          valid=false;
    }
   if (valid)
   {
    cout<<"yes";
   }
   else{
    cout<<"no";
   }

    

  }






   return 0;
}