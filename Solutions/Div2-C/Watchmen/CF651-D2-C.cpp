//
// Created by Mazen on 9/27/2023.
//
#include<bits/stdc++.h>

using namespace std;
struct point {
   long long   x, y;
};

bool ascx(point a, point b) {
    return a.x < b.x;
}

bool ascy(point a, point b) {
    return a.y < b.y;
}

long long choose(long long n, long long k) {
    long long r = 1;
    long long d;
    if (k > n) return 0;
    for (d=1; d <= k; d++) {
        r *= n--;
        r /= d;
    }
    return r;
}

int main() {

   long long   n;
    cin >> n;
    vector<point> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i].x >> arr[i].y;
    }
    sort(arr.begin(), arr.end(), ascx);
   long long   k = 0;
   long long   count;
   long long   out = 0;
    while (k < n) {
        count = 1;
       long long   x = arr[k].x;
        k++;
        while (k < n && x == arr[k].x) {
            count++;
            k++;
        }
        if (count >= 2) {
            out += choose(count,2);
        }

    }
    stable_sort(arr.begin(), arr.end(), ascy);

    k = 0;
    while (k < n) {
        count = 1;
       long long   y = arr[k].y;
        k++;
        while (k < n && y == arr[k].y) {
            count++;
            k++;
        }
        if (count >= 2) {
            out += choose(count,2);
        }
    }

    k = 0;
   long long   sum = 0;
    while (k < n) {
        count = 1;
       long long   y = arr[k].y;
       long long   x = arr[k].x;
        k++;
        while (k < n&&y == arr[k].y && x == arr[k].x ) {
            count++;
            k++;
        }
        if (count >= 2) {
            sum += choose(count,2);
        }

    }
    cout << out - sum;


    return 0;
}

