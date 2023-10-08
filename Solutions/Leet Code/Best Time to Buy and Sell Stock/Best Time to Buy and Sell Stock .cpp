//
// Created by Mazen on 10/1/2023.
//
#include<bits/stdc++.h>

using namespace std;
int mem[100009][3];

void rec(vector<int> &arr, int i, int &maxprofit, int price) {
    if (i == arr.size()) {
        return;
    }
    int profit = arr[i] - price;
    if(arr[i]<price)
    {
        price =arr[i];
    }
    if (profit > maxprofit) {
        maxprofit = profit;
    }
    rec(arr, i + 1, maxprofit, price);

}

int main() {
    vector<int> arr;
    int x;
    while (cin >> x) {
        arr.push_back(x);
    }
    memset(mem, -1, sizeof mem);
    int profit = 0;
    rec(arr, 0, profit, arr[0]);


    cout << profit;


    return 0;
}