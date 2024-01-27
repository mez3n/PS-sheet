//
// Created by Mazen on 11/1/2023.
//
#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    set<int> st;
    vector<set<int>> apps(n + 1);
    int i = 1;
    while (q--) {
        int x, y;
        cin >> x >> y;
        if (x == 1) {
            st.insert(i);
            apps[y].insert(i);
            i++;
        } else if (x == 2) {

            for (auto x: apps[y]) {
                if (st.count(x)) {
                    st.erase(x);
                }
            }
            apps[y].clear();
        } else {

            while (!st.empty() && *(st.begin()) <= y) {
                st.erase(*st.begin());
            }
        }
        cout << st.size() << endl;
    }


    return 0;
}
