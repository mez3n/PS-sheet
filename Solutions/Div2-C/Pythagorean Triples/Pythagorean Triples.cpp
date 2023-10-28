//
// Created by Mazen on 10/18/2023.
//
#include<bits/stdc++.h>

using namespace std;

bool isprime(long long n) {
    if (n == 0) {
        return false;
    }
    if (n == 2) {
        return true;
    }
    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
long long getMaxPrimefactor(long long n) {
    long long maxPF = -1;
    while (n % 2 == 0) {
        maxPF = 2;
        n /= 2;
    }
    for (int i = 3; i <= sqrt(n); i += 2) {
        while (n % i == 0) {
            maxPF = i;
            n = n / i;
        }
    }
    if (n > 2)
        maxPF = n;
    return maxPF;
}

int main() {
    long long n;
    cin >> n;
  if(n<=2)
  {
      cout<<-1;
      return 0;
  }
    if (isprime(n)) {
        long long s1=n*n/2;
        long long s2=1+n*n/2;

        cout<<s1<<" "<<s2;
    }else{
        long long p=getMaxPrimefactor(n);
        long long fact=n/p;
        long long s1=fact*(p*p-1)/2;
        long long s2=fact*(p*p+1)/2;
        cout<<s1<<" "<<s2;
    }


    return 0;
}