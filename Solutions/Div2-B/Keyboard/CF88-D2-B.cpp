/* CF88-D2-B.cpp  you solution is shit
04/08/2023   
11/33/53
--------------------------------------------- */
#include<bits/stdc++.h>
double get_dist(int x1,int y1,int x2,int y2 )
{
    double x= (x1-x2)*(x1-x2);
    double y= (y1-y2)*(y1-y2);
    return sqrt(x+y);
}
using namespace std;
int main()
{
    int n,m,x1;
    cin>>n>>m>>x1;
    map<char,double>arr;
    vector<vector<char>>keyboard (n,vector<char>(m));
    struct cord{
        int x,y;
    };
    vector<cord> shift;
    
    for(int i =0;i<n;i++)
    { 
        for(int j=0  ;j<m;  j++)
        {
         cin>>keyboard[i][j];
         arr[keyboard[i][j]]=INT_MAX;

          if(keyboard[i][j]=='S')
            {
                cord temp;
                temp.x=j;
                temp.y=i;
                shift.push_back(temp);
            }
        }
    }
   
    int count=0;
     
   for(int i =0;i<n;i++)
    { 
        for(int j=0;j<m;j++)
        {
          
             double minimum=INT_MAX;
             for(int it =0;it<shift.size();it++)
             {
                double dist=get_dist(j,i,shift[it].x,shift[it].y);
                minimum =min(minimum,dist);
             }
             
                arr[keyboard[i][j]]=min(minimum,arr[keyboard[i][j]]);
             
             
        }
    }
    
             
      int q;
      cin>>q;
      for(int i =0;i<q;i++)
      {
        char c;
        cin>>c;
  
        if(isupper(c))
        {
            c+=32;
             if(shift.empty())
             {
             cout<<-1;
             return 0;
             }
           if(arr[c]>x1&&arr[c]!=0)
          {
            count++;
          }
        }
          if(arr[c]==0)
          {
                cout<<"-1";
                return 0;
          }
         
      
      }

       
           
        
      cout<<count;






   return 0;
}