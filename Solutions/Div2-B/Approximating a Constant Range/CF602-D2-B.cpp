//
// Created by Mazen on 9/18/2023.
//
/*#include<bits/stdc++.h>
using namespace std;
int n ;

int db(int start,int end)
{
    if(end==n-1)
    {
        return 0;
    }
}
int main()
{

    cin>>n;
    int* arr=new int [n];
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
    }
    int maxcount=0;
    int count=0;
    int minno=arr[0];
    int maxno=arr[0];
    for(int i=0;i<n;i++)
    {
        if(maxno-arr[i]>1||arr[i]-minno>1)
        {
            maxcount=max(maxcount,count);
            count=0;
            maxno=arr[i];
            minno=arr[i];
            i--;
        }
        else {
            count++;
            maxno = max(maxno, arr[i]);
            minno = min(minno, arr[i]);
            if (maxcount > n / 2) {
                break;
            }
        }
    }
    maxcount=max(maxcount,count);
    cout<<maxcount;







   return 0;
}
*/