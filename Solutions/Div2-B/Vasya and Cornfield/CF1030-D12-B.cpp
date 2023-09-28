//
// Created by Mazen on 9/23/2023.
//
#include<bits/stdc++.h>
using namespace std;
double dist (int x1 ,int y1 ,int x2,int y2)
{
    return sqrt(pow(x1-x2,2)+pow(y1-y2,2));
}
bool check(int x1,int y1 ,int x2,int y2,int px,int py)
{

}
int main()
{
    int n,d,m;
    cin>>n>>d>>m;
    for(int i =0;i<m;i++)
    {
        int x,y;
        cin>>x>>y;
        if((x+y>=d&&x+y<=2*n-d)&&(y-x<=d&&y-x>=-d))
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
        cout<<endl;
    }








   return 0;
}