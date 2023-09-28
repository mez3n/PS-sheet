//
// Created by Mazen on 9/4/2023.
// this solution is not working
#include<bits/stdc++.h>

using namespace std;
int m, n, x, y;
//char ** arr= new char * [n];
int mem[1100][3];
void color(vector<vector<char>> &arr ,int j,char c) {
    for (int i = 0; i < n; i++) {
        arr[i][j] = c;
    }
}

void FindNums(vector<vector<char>>& arr,int j, int &CDots, int &CHash) {

    for(int i =0;i<n;i++)
    {

        if (arr[i][j] == '.') {
            CDots++;
        } else if (arr[i][j] == '#') {
            CHash++;
        }
    }
}

bool valid(vector<vector<char>>& arr,int j, char c) {
    j-=2;
    int count = 1;

    while (j >= 0&&arr[0][j]==c) {

            count++;
            j--;

    }

    if(count>=x&&count<=y)
    {
        return true;
    }
    return false;

}

int rec(vector<vector<char>> &arr,int j, char last) {
    for (int i = 0; i < n; i++) {
        for (int k = 0; k < m; k++) {
            cout << arr[i][k];
        }
        cout<<endl;
    }
    cout<<"----------------------------------"<<endl;
    int l;
    if(last=='.')l=0;
    else if(last=='#')l=1;
    else l=2;
    int & ret=mem[j][l];
    if(valid(arr,j,last)) {
        if (j == m) {
            ret = 0;
        } else if (ret != -1) {
            return ret;
        } else {
            if (valid(arr, j, last)) {
                cout << "valid" << endl;
                int Dots = 0, CHash = 0;
                FindNums(arr, j, Dots, CHash);
                color(arr, j, '.');
                int dot = Dots + rec(arr, j + 1, '.');
                color(arr, j, '#');
                int hash = CHash + rec(arr, j + 1, '#');
                ret = min(dot, hash);
            } else {
                ret = 1100;
            }
        }
    }
    else{
        ret=10000;
    }

    return ret;



}

int main() {

    cin >> n >> m >> x >> y;

    vector<vector<char>> arr (n,vector<char> (m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {

            cin>>arr[i][j];

        }
    }
    cout<<1;
    memset (mem,-1,sizeof(mem));

   int kapran = rec(arr,0,3);
   cout<<kapran;


    return 0;
}