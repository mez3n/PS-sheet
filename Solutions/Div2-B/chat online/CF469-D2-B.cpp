/* CF469-D2-B.cpp
19/08/2023
16/15/55
--------------------------------------------- */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int p, q, l, r;
    cin >> p >> q >> l >> r;
    vector<pair<int, int>> arrZ(p);
    vector<int> arr(1004);
    int count = 0;
    for (int i = 0; i < p; i++)
    {
        cin >> arrZ[i].first;
        cin >> arrZ[i].second;
    }
    for (int i = 0; i < q; i++)
    {
        int c, d;
        cin >> c >> d;
        for (int j = 0; j < p; j++)
        {
            int Tmin = arrZ[j].first - d;
            int Tmax = arrZ[j].second - c;
            if (Tmin > r || Tmax < l)
            {
                continue;
            }
            for (int z = max(l, Tmin); z <= min(r, Tmax); z++)
            {
                if (!arr[z])
                {
                    count++;
                    arr[z] = 1;
                }
            }
        }
    }
    cout << count;

    return 0;
}