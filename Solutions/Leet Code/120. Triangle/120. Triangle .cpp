//
// Created by Mazen on 1/7/2024.
//
#include<bits/stdc++.h>

using namespace std;
int mem[209][209];

int rec(vector<vector<int>> &triangle, int i, int j) {
    if (i == triangle.size()) {
        return 0;
    }
    if (j < 0 || j > i + 1) {
        return INT_MAX;
    }
    int &ret = mem[i][j];
    if (ret != -1) {
        return ret;
    }
    ret =rec(triangle,i+1,j);
    ret= min(ret,rec(triangle,i+1,j+1));
    ret+=triangle[i][j];
    return ret;
}

int main() {

    memset(mem, -1, sizeof mem);


    return 0;
}