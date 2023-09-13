//
// Created by Mazen on 9/10/2023.
//
#include<bits/stdc++.h>
using namespace std;
struct linear{
    double m;
    double c;
};
bool operator < (const linear & l1,const linear & l2)
{
                                return (l1.m<l2.m);
}
int main()
{
    int n,x,y;
    cin>>n>>x>>y;
    set <linear> lines;
   // vector<int> arrx(n);
   // vector<int> arry(n);
    for(int i=0;i<n;i++)
    {
        double x1,y1,m1,c1;
        cin>>x1>>y1;
        if(x==x1)
        {
            m1=10e5;
            c1=10e5;
        }
        else {
            m1 = (y - y1) / (x - x1);
            c1 = y1 - m1 * x1;
        }
        linear line;
        line.c=c1;
        line.m=m1;
        lines.insert(line);
    }
    cout<<lines.size();









   return 0;
}