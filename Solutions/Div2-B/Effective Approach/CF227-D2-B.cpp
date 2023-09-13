/* CF227-D2-B
26/07/2023
19/53/11
--------------------------------------------- */
#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long n;
  cin >> n;
  map<long long, long long> arr;
  for (long long i = 0; i < n; i++)
  {
    long long x;
    cin >> x;
    arr[x] = i + 1;
  }
  long long m;
  cin >> m;
  vector<long long> queries(m);
  for (long long i = 0; i < m; i++)
  {
    cin >> queries[i];
  }
  long long c1 = 0;
  long long c2 = 0;
  for (long long i = 0; i < m; i++)
  {
    c1 += arr[queries[i]];
    c2 += n - arr[queries[i]] + 1;
  }
  cout << c1 << " " << c2;

  return 0;
}