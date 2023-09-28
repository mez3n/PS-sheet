/* Ammar-utiful_Permutations.cpp
28/07/2023
17/06/13
--------------------------------------------- */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testcases;
    cin >> testcases;
    for (int kapran = 0; kapran < testcases; kapran++)
    {
        int n;
        cin >> n;
        vector<int> arr;
        for (int i = 1; i < n + 1; i++)
        {
            if (i % 2 == 0)
            {
                arr.push_back(i);
            }
            else
            {
                arr.insert(arr.begin(), i);
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
    }

    return 0;
}
