//
// Created by Mazen on 9/2/2023.
//
#include<bits/stdc++.h>
using namespace std;
int n;
vector<int> arr;

int mem [100][5]{-1};;
int vac (int i ,int lastday)
{
    int& ret=mem[i][lastday];
    if(i==n){
        return 0;
    }
    if(ret!=-1)
    {
        return ret;
    }
    if(lastday==arr[i]||arr[i]==0)
    {
        ret = vac(i+1,0)+1;
    }
    else if(arr[i] !=3)
    {
        ret =vac(i+1,arr[i]);
    }
    else if(lastday==0||lastday==4){
        ret= min(vac(i+1,1),vac(i+1,2));
    }
    else // lastday =3
    {
        if(lastday==1)
        {
            ret = vac(i+1,2);
        }
        else
        ret = vac(i+1,1);
    }

    return ret;
}

int main()
{

    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);

    }
    memset(mem,-1,sizeof(mem));
   int ans= vac(0,4);
    cout<<ans;






   return 0;
}