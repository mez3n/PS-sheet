//
// Created by Mazen on 1/5/2024.
//
#include<bits/stdc++.h>

using namespace std;
vector<string> mem (100009,"z");


string rec (vector<int>&cost ,int cur)
{
    if(cur==0)
    {
        return "";
    }
    string & ret  = mem[cur];
    if(ret!="z")
    {
        return ret;
    }
     ret = "0";
    for(int i =8 ;i>=0;i--)
    {
       if(cur>=cost[i])
       {
           string s=rec(cost,cur-cost[i]);
           if(s=="0")
           {
               continue;
           }
           s= to_string(i+1)+s;
           if(ret=="0")
           {
               ret= s ;
               continue;
           }
          if(ret.length()>=s.length())
          {
              continue;
          }
          else{
              ret=s;
          }
       }
    }
    return ret;

}






int main() {
    int target;
    cin >>target;
    vector<int> cost(9);
    for (int i = 0; i < 9; i++) {
        cin >> cost[i];
    }
   cout<< rec(cost,target);


    return 0;
}