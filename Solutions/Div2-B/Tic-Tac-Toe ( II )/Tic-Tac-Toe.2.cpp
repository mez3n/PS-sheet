/* TOE1_Tic-Tac-Toe_2.cpp
08/08/2023   
18/48/19
--------------------------------------------- */
#include<bits/stdc++.h>
using namespace std;
bool is_win(string config) {

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

	return rows || columns || diagonals;
}



int main()
{
    

  string board;
  cin>>board;
  while(board!="end")
    {
        
    
      string start=".........";
      queue< pair<string,bool> > q;
      q.push( make_pair( start, true ));

      string ans ="invalid";
      while(!q.empty())
      {
        string cur =q.front().first;
        bool player=q.front().second;
        q.pop();
        if(cur==board)
        {
            ans="valid";
            break;
        }
        if(is_win(cur)){
            continue;
        }
        for(int i =0;i<9;i++)
        {
            if(cur[i]=='.')
            {
                cur[i]=(player ? 'X':'O');
                if(cur[i]==board[i]){
                    q.push(make_pair(cur,!player));
                }
                cur[i]='.';
            }
            
        }
      }
      cout<<ans<<endl;
       cin>>board;
      




    }
  






   return 0;
}