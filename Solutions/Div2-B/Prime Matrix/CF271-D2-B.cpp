//
// Created by Mazen on 10/24/2023.
//
#include<bits/stdc++.h>

using namespace std;
bool isprime[100009];
vector<int> primes;
int arr[501][501];

void sieve(int n) {
    for (int i = 2; i * i <= n; i++) {
        if (isprime[i]) {
            for (int j = i * i; j <= n; j += i) {
                isprime[j] = false;
            }
        }

    }
    for (int i = 2; i <= n; i++) {
        if (isprime[i]) {
            primes.push_back(i);
        }
    }
}

int main() {
    memset(isprime, true, sizeof isprime);
    sieve(100009);
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    long long mn = LONG_LONG_MAX;
    for (int i = 0; i < n; i++) {
        long long temp = 0;
        for (int j = 0; j < m; j++) {
            if(arr[i][j]==1)
            {
                temp+=1;
            }
            if (!isprime[arr[i][j]]) {
                auto y = upper_bound(primes.begin(), primes.end(), arr[i][j]);
                temp += *y - arr[i][j];
            }
        }
        mn = min(temp, mn);
    }
    for (int i = 0; i < m; i++) {
        long long temp = 0;
        for (int j = 0; j < n; j++) {
            if(arr[j][i]==1)
            {
                temp+=1;
            }
            if (!isprime[arr[j][i]]) {
                auto y = upper_bound(primes.begin(), primes.end(), arr[j][i]);
                temp +=  *y - arr[j][i];
            }
        }
        mn = min(temp, mn);
    }
    cout << mn;


    return 0;
}
