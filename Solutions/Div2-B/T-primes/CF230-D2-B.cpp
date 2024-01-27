//
// Created by Mazen on 10/29/2023.
//
#include<bits/stdc++.h>

using namespace std;
bool arr[100009];

void SieveOfEratosthenes(int n) {

    // Create a boolean array "prime[0..n]" and initialize
    // all entries it as true. A value in prime[i] will
    // finally be false if i is Not a prime, else true.
    for (int p = 2; p * p <= n; p++) {
        // If prime[p] is not changed, then it is a prime
        if (arr[p]) {
            // Update all multiples of p greater than or
            // equal to the square of it numbers which are
            // multiple of p and are less than p^2 are
            // already been marked.
            for (int i = p * p; i <= n; i += p)
                arr[i] = false;
        }
    }

}

bool prime(long long n) {
    if (n == 1 || n == 2) {
        return false;
    }
    for (long long i = 2; i * i <=n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;

}

int main() {

    int n;
    cin >> n;
    unordered_map<long long ,int> mp;
    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        if(x==1||x==2)
        {
            cout<<"NO"<<endl;
            continue;
        }
        if(mp[x]!=0)
        {
            if(mp[x]==1)
            {
                cout<<"YES"<<endl;

            }else{
                cout<<"NO"<<endl;
            }
            continue;
        }
        long long m= sqrt(x);
        if(m*m==x)
        {
            if(prime(m)||m==2)
            {
                cout<<"YES"<<endl;
                mp[x]=1;
                continue;
            }
        }
        mp[x]=-1;
        cout<<"NO" << endl;
    }




    return 0;
}