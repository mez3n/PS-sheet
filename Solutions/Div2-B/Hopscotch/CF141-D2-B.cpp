//
// Created by Mazen on 9/16/2023.
//
#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,x,y;
    cin>>a>>x>>y;
    if(y<=0)
    {
        cout<<-1;
        return 0;
    }
    int dy=y/a;
    if(y/a==dy)
    {
        cout<<"-1";
        return 0;
    }
    dy++;

    if(dy%2==0||dy==1)
    {
        if(abs(x)>=a/2)
        {
            cout<<-1;
            return 0;
        }
        else
        {
            int m =dy+(dy/2)-1;
            cout<<max(m,1);
        }
    }
    else
    {
        if((abs(x)>=a||x==0))
        {
            cout<<-1;
        }else
        {
            int m =dy+(dy/2)-1;
            if(x>0)
            {
                cout<<m+1;
            }
            else
            {
                cout<<m;
            }
        }
    }








   return 0;
}