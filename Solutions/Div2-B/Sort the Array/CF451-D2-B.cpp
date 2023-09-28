/* CF451-D2-B.cpp
30/07/2023   
22/51/42
--------------------------------------------- */
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    bool need_reverse=false;   
    int start=0;
    int last=n-1;
    bool sorted=true;
    for(int i=0;i<n-1;i++)
    {
        if(!need_reverse&&(arr[i]>arr[i+1]))
        {
            sorted=false;
            need_reverse=true;
            start=i;
        }
        if(need_reverse&&(arr[i]<arr[i+1]))
        {
            last=i;
            break;
        }
    }
    if(!sorted){
    for(int i =0;i<(last-start+1)/2;i++)
    {
        swap(arr[i+start],arr[last-i]);
    }

     for(int i=0;i<n-1;i++)
    {
      if(arr[i]>arr[i+1])
        {
            cout<<"no";
            return 0;
        }
    }
    }
    else{
        start=last=0;
    }
    cout<<"yes\n"<<start+1<<" "<<last+1;
    

  






   return 0;
}