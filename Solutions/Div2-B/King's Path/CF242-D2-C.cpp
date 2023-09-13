/* CF242-D2-C.cpp
10/08/2023   
18/06/22
--------------------------------------------- */
#include<bits/stdc++.h>
using namespace std;
int main()
{

    int x0,y0,x1,y1,n;
    cin>>x0>>y0>>x1>>y1>>n;
    set<pair<int,int>> pts;
    for(int i =0;i<n;i++)
    {
        int r,a,b;
        cin>>r>>a>>b;
        for(int i=a;i<=b;i++)
        {
            pts.insert(make_pair(r,i));
        }

    }
    int dx[8] ={1, 1, -1, -1, 0, 1, 0, -1};
    int dy[8] ={1, -1, 1, -1, 1, 0, -1, 0};

    map<pair<int,int>,int> length;
    queue<pair<int,int>> q;
    pair <int,int>cur;
    q.push(make_pair(x0,y0));
   
    int dep=0;
    while(!q.empty())
    {
         int q_len=q.size();
         dep++;
        while(q_len>0)
        {
        q_len--;
        cur=q.front();
        q.pop();  
        for(int i =0;i<8;i++)
        {
          int x=cur.first+dx[i];
          int y=cur.second+dy[i];
          if(pts.count(make_pair(x,y))==0||length[make_pair(x,y)]!=0)
          {
            continue;
          }
          if(x==x1&&y==y1)
          {
            cout<<dep;
            return 0;
          }
          length[make_pair(x,y)]=dep;
          q.push(make_pair(x,y));
        }
        }
    }
    cout<<-1;



    
  






   return 0;
}