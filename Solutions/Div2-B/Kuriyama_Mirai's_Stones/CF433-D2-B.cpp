/* CF433-D2-B.cpp
29/07/2023   
16/05/33
--------------------------------------------- */
#include<bits/stdc++.h>
using namespace std;
long long getsum(long long l, long long r ,vector<long long>& price)
{
    return price[r]-price[l-1];
}
void summing(vector<long long> & in,vector<long long> & out)
{
    out[1]=in[1];
    for(long long i=2;i<in.size();i++)
    {
        out[i]=out[i-1]+in[i];
    }
}

int main()
{
    long long n;
    cin>>n;
    vector<long long>price (n+1);
    for(long long i =1;i<n+1;i++)
    {
        cin>>price[i];
    }
    vector<long long> sorted(price);
    sort(sorted.begin(),sorted.end());
    vector<long long>summedprice(n+1);
    vector<long long>summedsorted(n+1);
    summing(price,summedprice);
    summing(sorted,summedsorted);


  
    long long m;
    cin>>m;
    vector<long long> out(m);
    for(long long i=0;i<m;i++)
    {
        long long x;
        cin>>x;
        long long r,l;
        cin>>l>>r;
        if(x==1)
        {
            cout<<getsum(l,r,summedprice)<<"\n";
        }
        else
        {
            cout<<getsum(l,r,summedsorted)<<"\n";
        }
        

    }
 
        
    
  

  






   return 0;
}