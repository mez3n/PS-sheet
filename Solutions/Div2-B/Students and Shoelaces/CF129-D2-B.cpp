/* CF129-D2-B.cpp
14/08/2023
14/05/06
--------------------------------------------- */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n;
    cin >> n >> m;
    vector<vector<int>> arr(n + 1);
    vector<int> del;
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        arr[x].push_back(y);
        arr[y].push_back(x);
    }
    int count = 0;
    int comp = 0;
    do
    {
        comp = count;
        for (int i = 1; i < n + 1; i++)
        {
            if (arr[i].size() == 1)
            {
                if (comp == count)
                {
                    count++;
                }
                del.push_back(i);
                arr[i].clear();
            }
        }

        while (del.size() > 0)
        {
            int to_del = del.front();
            del.erase(del.begin());
            for (int i = 1; i < n + 1; i++)
            {
                for (int j = 0; j < arr[i].size(); j++)
                {
                    if (arr[i][j] == to_del)
                    {
                        arr[i].erase(arr[i].begin() + j);
                        break;
                    }
                }
            }
        }

    } while (count != comp);

    cout << count;

    return 0;
}
