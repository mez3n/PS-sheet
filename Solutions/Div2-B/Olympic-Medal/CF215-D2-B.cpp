#include<bits/stdc++.h>
using namespace std;
int getmax(vector<int> arr)
{
    int max=arr[0];
    for(int i =1;i<arr.size();i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
}
int getmin(vector<int> arr)
{
    int min=arr[0];
    for(int i =1;i<arr.size();i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    return min;
}
int main()
{
    int x,y,z;
    cin>>x;
    vector<int> r1 (x);
    for(int i=0;i<x;i++)
    {
        cin>>r1[i];
    }

    cin>>y;
    vector<int> p1 (y);
    for(int i=0;i<y;i++)
    {
        cin>>p1[i];
    }

    cin>>z;
    vector<int> p2 (z);
    for(int i=0;i<z;i++)
    {
        cin>>p2[i];
    }

    double a,b;
    cin>>a>>b;
    double R1=getmax(r1);
    double P1=getmax(p1);
    double P2=getmin(p2);
    double ans = sqrt((b*R1*R1*P1)/(a*P2+b*P1));
    cout<<setprecision(12)<<ans;









    return 0;
}