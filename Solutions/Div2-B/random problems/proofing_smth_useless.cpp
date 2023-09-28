/* proofing_smth_useless.cpp
31/07/2023   
22/38/09
--------------------------------------------- */
#include<bits/stdc++.h>
using namespace std;
int main()
{
for(int a=0;a<100000000;a++)
{
    for(int b=0;b<100000000;b++)
    {
        bool x=(a>2*b);
        bool y=(a-b>b);
        if(x!=y)
        {
            cout<<a<<" "<<b<<endl;
        }
    }
}  






   return 0;
}