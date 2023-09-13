/* CF6-D2-B.cpp
30/07/2023   
20/48/28
--------------------------------------------- */
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    char c;
    cin>>c;
    vector<vector<char>> arr (n,vector<char>(m));
    map<char,int> count;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
            count[arr[i][j]]++;
        }
    }
    count['.']=0;
    count[c]=0;
    
    struct point{
        int x,y;
    };
    vector<point>index;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
           if(arr[i][j]==c)
           {
            point temp;
            temp.y=i;
            temp.x=j;
            index.push_back(temp);
           }
        }
    }
    int out=0;
    int btee5 = index.size();
    for(int i =0;i<btee5;i++)
    {
        point temp=index.front();
        index.erase(index.begin());


        if(temp.y<n-1&&count[arr[temp.y+1][temp.x]]!=0)
        {
            out++;
            count[arr[temp.y+1][temp.x]]=0;
        }


          if(temp.x<m-1&&count[arr[temp.y][temp.x+1]]!=0)
        {
            out++;
            count[arr[temp.y][temp.x+1]]=0;
        }



           if(temp.y>0&&count[arr[temp.y-1][temp.x]]!=0)
        {
            out++;
            count[arr[temp.y-1][temp.x]]=0;
        }



           if(temp.x>0&&count[arr[temp.y][temp.x-1]]!=0)
        {
            out++;
            count[arr[temp.y][temp.x-1]]=0;
        }
    }

    cout<<out;


  






   return 0;
}