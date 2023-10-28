//
// Created by Mazen on 10/14/2023.
//
#include<bits/stdc++.h>

using namespace std;
struct point {
    int x, y;
};
int n;
vector<string> arr;
vector<vector<string>> out;

bool valid() {
    vector<point> q;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i][j] == 'Q') {
                point temp;
                temp.x = j;
                temp.y = i;
                q.push_back(temp);
            }
        }
    }
    bool a = true;
    for (int i = 0; i < q.size()&&a; i++) {
        for (int j = 0; j < q.size()&&a; j++) {
           if(i!=j)
           {
             if(q[i].x==q[j].x||q[i].y==q[j].y||abs(q[i].x-q[j].x)==abs(q[i].y-q[j].y))
             {
                 a= false;
             }
           }
        }
    }
    return a;
}
void rec(int j)
{
    if(j==n)
    {
        out.push_back(arr);
        return;
    }
    for(int i=0;i<n;i++)
    {
        arr[j][i]='Q';
        if(valid())
        {
            rec(j+1);
        }
        arr[j][i]='.';
    }
}
int main() {
    cin >> n;
    arr.resize(n, "");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            arr[i] += ".";
        }
    }
    rec(0);
    for (int i = 0; i < out.size(); i++) {
        for (int j = 0; j < n; j++) {
            cout<<out[i][j]<<endl;
        }
        cout<<"==================="<<endl;
    }



    return 0;
}
