/* CF79-D12-B_2.cpp
01/08/2023   
12/13/13
--------------------------------------------- */
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n ,m, k,t;
    cin>>n>>m>>k>>t;
    vector<int> arr(k);
    for(int i =0;i<k;i++)
    {
        long long x, y;
        cin>>y>>x;
        arr[i]=(y-1)*m+x;
    }
    sort(arr.begin(),arr.end());
    
    for(int i =0;i<t;i++)
    {
        int index=0;
        int out=-2;
        int x,y;
        cin>>y>>x;
        long long cell = (y-1)*m+x;
        for(int j =0;j<k;j++)
        {
            
            if(arr[j]==cell)
            {
            out=-1;
            break;
            }
            else if(arr[j]>cell)
            {
                break;
            }
            index=j+1;
        }
        
        if(out!=-1)
        {
        out=(cell-index-1)%3;
        }
        if(out==0)
        {
            cout<<"Carrots";
        }
        else if(out==1)
        {
            cout<<"Kiwis";
        }
        else if(out==2)
        {
            cout<<"Grapes";
        }
        else{
            cout<<"Waste";
        }
       
        cout<<endl;
    }
  







   return 0;
}