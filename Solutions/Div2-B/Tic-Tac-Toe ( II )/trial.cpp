/* trial.cpp
08/08/2023   
19/56/37
--------------------------------------------- */
#include<bits/stdc++.h>
using namespace std;
int is_win(string config) {

	bool rows = 
		(config[0] != '.' && config[0] == config[1] && config[1] == config[2]) ||
		(config[3] != '.' && config[3] == config[4] && config[4] == config[5]) ||
		(config[6] != '.' && config[6] == config[7] && config[7] == config[8]);

	bool columns =
		(config[0] != '.' && config[0] == config[3] && config[3] == config[6]) ||
		(config[1] != '.' && config[1] == config[4] && config[4] == config[7]) ||
		(config[2] != '.' && config[2] == config[5] && config[5] == config[8]);

	bool diagonals =
		(config[0] != '.' && config[0] == config[4] && config[4] == config[8]) ||
		(config[2] != '.' && config[2] == config[4] && config[4] == config[6]);

	if((rows && columns)||(rows&&diagonals)||(columns&&diagonals))
    {
        return -1;
    }
    else if(rows||columns||diagonals)
    {
        return 1;
    }
    else{
        return 0;
    }
}

int main()
{
  

string arr;
  cin>>arr;
  while(arr!="end")
    {
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
   int x =is_win(arr);
   if(x==-1)
   {
    cout<<"invalid"<<endl;
    continue;
   }
     if(noO>noX||noX-noO>1||(noO+noX==9&&noO>noX))
    {
          valid=false;
    }
   if (valid)
   {
    cout<<"valid";
   }
   else{
    cout<<"invalid";
   }
     cin>>arr;
     cout<<endl;
    

  }




   return 0;
}