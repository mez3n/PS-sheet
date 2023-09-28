/* CF79-D12-B.cpp  // stupid solution gives mem limit
01/08/2023   
11/49/08
--------------------------------------------- */
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n ,m, k,t;
    cin>>n>>m>>k>>t;
    vector<vector<int>> arr(n+1,vector<int>(m+1));
    for(int i =0;i<k;i++)
    {
        int x, y;
        cin>>x>>y;
        arr[x][y]=-1;
    }
    int index=0;
    for(int i =1;i<n+1;i++){
        for(int j =1;j<m+1;j++){
            if(arr[i][j]==0)
            {
                arr[i][j]=index%3;
                index++;
            }
        }
    }

    for(int i =0;i<t;i++)
    {
        int x,y;
        cin>>x>>y;
        if(arr[x][y]==0)
        {
            cout<<"Carrots";
        }
        else if(arr[x][y]==1)
        {
            cout<<"Kiwis";
        }
        else if(arr[x][y]==2)
        {
            cout<<"Grapes";
        }
        else
        {
            cout<<"Waste";
        }
        cout<<endl;
    }
  






   return 0;
}