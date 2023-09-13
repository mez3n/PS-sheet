//
// Created by Mazen on 9/3/2023.
//
#include<bits/stdc++.h>
using namespace std;

int n ;
int mem[100000][2];
struct tree{
    int height;
    int start;
    int end;
};
vector<tree> arr;
int fall  (int i, int fell){
    int & ret=mem[i][fell];
    if(ret !=-1)
    {
        return ret;
    }
    else if(i==n)
    {
        ret=0;
    }
    else if(i==0)
    {
        arr[i].end=arr[i].start-arr[i].height;
        ret= 1+fall(i+1,1);
    }
   else if(max(arr[i-1].end,arr[i-1].start)>=arr[i].start) // if prev was right fall and not possible
    {
        ret= 0;
    }
    else if(i==n-1)
    {
        arr[i].end=arr[i].start+arr[i].height;
        ret= 1+fall(i+1,1);
    }
    else
    {
        if(max(arr[i-1].end,arr[i-1].start)<arr[i].start-arr[i].height)  //left fall
        {
            arr[i].end=arr[i].start-arr[i].height;
            ret = 1+fall(i+1,1);
        }
        else{ // right fall
            arr[i].end=arr[i].height+arr[i].start;
            int m =1+fall(i+1,1);
            arr[i].end=arr[i].start; //no fall
            int y=fall(i+1,0);
            ret=max(m,y);
        }

    }


    return ret;

}
int main()
{
    cin>>n;
    tree x;
    for(int i=0;i<n;i++)
    {
        cin>>x.start>>x.height;
        arr.push_back(x);
    }
    memset (mem,-1,sizeof (mem));
    cout<<fall(0,0);








   return 0;
}