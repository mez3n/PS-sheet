//
// Created by Mazen on 9/29/2023.
//
#include<bits/stdc++.h>

using namespace std;

bool isprime(int n) {
    if (n < 2 || n % 2 == 0)
        return false;
    if (n == 2)
        return true;
    for (int i = 2; i * i <= n; i += 2) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int sieve(int n) {
    vector<bool> prime(n + 1, true);
    prime[0] = prime[1] = 0;
    int count = 0;
    for (int i = 2; i * i <= n; i++) {
        if (prime[i]) {
            for (int j = i + i; j <= n; j += i) {
                prime[j] = false;
            }
        }
    }
    for (int i = 0; i <= n; i++) {
        if (prime[i]) {
            count++;
        }
    }
    return count;
}

int main() {

    int n;
    cin >> n;
    cout << sieve(n);
    return 0;
}
