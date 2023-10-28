//
// Created by Mazen on 10/28/2023.
//
#include<bits/stdc++.h>

using namespace std;


int main() {
    int n, m, k;
    scanf("%d%d%d",&n,&m,&k);
    vector<vector<int>> arr(n,vector<int>(m,0));

    for (int l=0 ;l<k;l++) {
        int type, number, color;
        scanf("%d%d%d",&type,&number,&color);
        if (type == 1) {
            for (int j = 0; j < m; j++) {
                arr[number-1][j] = color;
            }
        } else {
            for (int i = 0; i < n; i++) {
                arr[i][number-1] = color;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }


    return 0;
}