//
// Created by Mazen on 8/29/2023.
//
#include<bits/stdc++.h>
using namespace std;
int n,t2;  double t1;
double k;
struct dwarf{
    int id;
    double height;
};
bool sorting(dwarf d1,dwarf d2){
    if(d1.height>d2.height)
    {
        return true;
    }
    else if (d2.height>d1.height)
    {
        return false;
    }
    else
    {
        return d1.id<d2.id;
    }
}
int main()
{
    cin>>n>>t1>>t2>>k;
    k=(100-k)/100;
    t1*=k;
    vector<dwarf> arr(n);
    for(int i =0;i<n;i++)
    {
        double x,y;
        cin>>x>>y;
        arr[i].id=i+1;
        double h1=x*t2+y*t1;
        double h2=y*t2+x*t1;
        arr[i].height=h1>h2?h1:h2;
    }
    sort(arr.begin(),arr.end(), sorting);
    for(int i =0;i<n;i++)
    {
        cout<<arr[i].id<<" "<<fixed<<setprecision(2)<<arr[i].height<<endl;
    }







   return 0;
}
