//
// Created by Mazen on 8/26/2023.
//
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    int score=1;
    cin>>n>>m;
    vector <int> arr(n);
    string line;
    for(int i =0;i<n;i++)
    {
        cin>>line;
        int g=-1,s=-1;
        for(int j=0;j<m;j++)
        {
            if(line[j]=='G')
            {
                g=j;
            }
            if(line[j]=='S')
            {
                s=j;
            }
            if(g!=-1&&s!=-1){
                break;
            }
        }
        if(s-g<0)
        {
            cout<<"-1";
            return 0;
        }
        arr[i]=s-g;
    }
    sort(arr.begin(),arr.end());
    int x=arr[0];
   for(int i =1;i<n;i++)
   {
       if(arr[i]!=x)
       {
           score++;
       }
       x=arr[i];
   }
   cout<<score;







    return 0;
}