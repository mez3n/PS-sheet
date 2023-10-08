//
// Created by Mazen on 9/29/2023.
//
#include<bits/stdc++.h>

using namespace std;
struct num{
    int bi;
    int dec;
};
bool sor(num a ,num b)
{
    return a.bi<b.bi;
}
int main() {
    int sum, lim;
    cin >> sum >> lim;
    vector<num> arr(lim + 1);
    for (int i = 1; i < lim + 1; i++) {
        int k = i;
        int count=-1;
        int ind=-1;
        while (k != 0) {
            count++;
          if(k%2!=0)
          {
              ind = count;
              break;
          }
            k /= 2;
        }
        arr[i].bi=pow(2,ind);
        arr[i].dec=i;

    }
    sort(arr.begin()+1,arr.end(),sor);
    int j =arr.size()-1;
    vector<int> res;
    while(sum!=0&&j>0)
    {
        if(sum-arr[j].bi>=0) {
            sum -= arr[j].bi;
            res.push_back(arr[j].dec);
        }
        j--;
    }
    if(sum==0)
    {
        cout<<res.size()<<endl;
        for(auto x :res)
        {
            cout<<x<<" ";
        }
    }else
    {
        cout<<-1;
    }



    return 0;
}