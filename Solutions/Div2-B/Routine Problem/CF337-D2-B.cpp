//
// Created by Mazen on 9/20/2023.
//
#include<bits/stdc++.h>

using namespace std;

double gcd(double a, double b) {
    if(a==0||b==0)
    {
        return max(a,b);
    }
    while (a != b) {
        if (a > b) {
            a -= b;
        } else {
            b -= a;
        }
    }
    return a;
}

int main() {
    double a, b, c, d,p;
    cin >> a >> b >> c >> d;
    double g=gcd(c,d);
    double lcm = round(c*d/g);
    a =round((a/c) *lcm);
    b =round((b/d) *lcm);
    double mx = max(a, b);
    p = mx - (a + b - mx);
    double great = gcd(p, mx);
    p /= great;
    mx /= great;
    cout << (long long)p << "/" << (long long)mx;


    return 0;
}