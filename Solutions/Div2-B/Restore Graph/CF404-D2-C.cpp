/* CF404-D2-C.cpp
10/08/2023   
20/09/57
--------------------------------------------- */
#include<bits/stdc++.h>
using namespace std;
bool p_sort(pair<int,int> a,pair<int,int>b)
{
    return (a.first<b.first);
}
int main()
{
    int n,k;
    cin>>n>>k;
    vector<pair<int,int>> arr(n+1);
    for(int i =1;i<n+1;i++)
    {
        cin>>arr[i].first;
    }
    sort(arr.begin(),arr.end(),p_sort);
    if(arr[1]==arr[2])
    {
        cout<<-1;
        return 0;
    }
    for(int i=1;i<n;i++)
    {
        if(arr[i+1].first-arr[i].first>=2)
        {
            cout<<-1;
            return 0;
        }
    }
    queue<int> q;
    q.push(0);
    int i =2;
    int count=0;
    while(i<n+1)
    {
        int cur=q.front();
        q.pop();
        while(count<k)
        {
            if(arr[i].first-1==cur)
            {
                q.push(cur+1);
               // arr[i].second()
            }
        }
    }


    


  






   return 0;
}