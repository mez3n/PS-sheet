/* Graph.cpp
16/07/2023   
15/20/13
--------------------------------------------- */
#include<bits/stdc++.h>
using namespace std;

bool dfs (vector<vector<int>> & list, int start, int parent,vector<bool>& visited,int & count)
{
     if(visited[start])
      {
            return true;    
      }
   visited[start]=true;
   for(auto neighbor:list[start]) if(neighbor!=parent)
   {
         count++;
         if(dfs(list,neighbor,start,visited,count))
         {
            return true;
         }
      
   }
   return false;
}

int main()
{
  int n,m;
  cin>>n;
  cin>>m;
  vector<vector<int>> list(n);
  for(int i=0;i<m;i++)
  {
   int u,v;
   cin>>u>>v;
   u--;
   v--;
   list[u].push_back(v);
   list[v].push_back(u);
  }
  vector<bool> visited (n,false);
   int toremove=0;
  for(int i =0;i<n;i++)
  {
   if(!visited[i])
   {
   int count=0;
   bool cycle=dfs(list,i,-1,visited,count);
   if(cycle)
   {
  toremove+=(count%2==1);
   }
   }
  }


  if((n-toremove)%2!=0)
  {
   toremove++;
  }

   cout<<toremove;
  
  return 0;





}