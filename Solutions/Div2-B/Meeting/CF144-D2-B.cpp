//
// Created by Mazen on 9/8/2023.
//
#include<bits/stdc++.h>
using namespace std;
struct point{
    double x;
    double y;
};
struct rad{
    double x;
    double y;
    double r;
};
bool blank(double x1, double y1,double x2,double y2,double r)
{
    double d1=pow(x1-x2,2);
    double d2=pow(y1-y2,2);
    double d3=sqrt(d1+d2);
    if(d3<=r)
    {
        return true;
    }
    else
    {
        return false;
    }

}

int main()
{
    int x1,y1,x2,y2,n;
    cin>>x1>>y1>>x2>>y2>>n;
    vector<point>arr;
    vector<rad>radiators(n);
    {
        int index=min(x1,x2);
        while(index<=max(x1,x2))
        {
            point p;
            p.x=index,p.y=y1;
            arr.push_back(p);
            p.y=y2;
            arr.push_back(p);
            index++;
        }
        index=min(y1,y2);
        index++;
        while(index<max(y1,y2))
        {
            point p ;
            p.x=x1; p.y=index;
            arr.push_back(p);
            p.x=x2;
            arr.push_back(p);
            index++;
        }
    }
    for(int i =0;i<n;i++)
    {
        cin>>radiators[i].x>>radiators[i].y>>radiators[i].r;
    }
    int count =0;
    for(auto & i : arr)
    {
        bool blanket=true;
        for(int j =0;j<n;j++)
        {
            if(blank(i.x,i.y,radiators[j].x,radiators[j].y,radiators[j].r))
            {
               blanket=false;
               break;
            }
        }
        if(blanket)
        {
            count++;
        }

    }
    cout<<count;



    
   return 0;
}