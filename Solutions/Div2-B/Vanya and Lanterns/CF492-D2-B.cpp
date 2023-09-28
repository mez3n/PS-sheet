/* CF492-D2-B.cpp  // gives memory limit in map and vector
28/07/2023   
23/43/21
--------------------------------------------- */
#include<bits/stdc++.h>
#include<iomanip>

using namespace std;
int diff(int a, int b)
{
    return abs(b-a);
}
int main()
{
    int n;
    int length;
    cin>>n>>length;
    vector<int> arr(length+2,0);
    int x;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        x++;
        arr[x]=x;
    }
    int last=-1;
    double max=-1;
    int first;
    for(int i=1;i<length+2;i++)
    {
        
        if(arr[i]!=0)
        {
                if(last==-1)
                {
                    first=i;
                    last=i;
                }
                else if((diff(last,arr[i])/2.0>max))
                {
                    max=(diff(last,i)/2.0);
                }
                last=i;
        }
    }

    if(arr[length+1]==0)
    {
        if(diff(length+1,last)>max)
        {
            max=diff(length+1,last);
        }
    }
    if(arr[1]==0)
    {
    if(diff(1,first)>max)
        {
            max=diff(1,first);
        }
    }
    
    cout <<setprecision(10)<<max;





   return 0;
}