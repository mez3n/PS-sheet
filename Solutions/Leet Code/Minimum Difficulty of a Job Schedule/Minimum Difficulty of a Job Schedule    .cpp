//
// Created by Mazen on 1/6/2024.
//
#include<bits/stdc++.h>

using namespace std;

int mem [19][309];

int rec (int i ,vector<int> &jobDifficulty,int d)
{

   if(d==1)
   {
       int mx=-1;
       for(int j=i;j<jobDifficulty.size();j++)
       {
           mx=max(mx,jobDifficulty[i]);
       }
       return mx;
   }
    int & ret = mem[d][i];
   if(ret!=-1)
   {
       return ret;
   }
   int n = jobDifficulty.size();
   int mx=-1;
   ret=INT_MAX;
   for(int j=i;j<=n-d;j++)
   {
       mx = max(mx,jobDifficulty[i]);
       ret = min(ret,mx+rec(j+1,jobDifficulty,d-1));
   }
   return ret;
}



int main() {
    int n, d;
    cin >> n >> d;
    vector<int> jobDifficulty(n);
    for (int i = 0; i < n; i++) {
        cin >> jobDifficulty[i];
    }
    memset(mem,-1,sizeof mem);
    if(n<d)
    {
        cout<<-1;
    }
    cout<<rec(0,jobDifficulty,d);


    return 0;
}