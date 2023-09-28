/* CF810-D2-B.cpp
31/07/2023
21/03/12
--------------------------------------------- */
#include <bits/stdc++.h>
using namespace std;
struct day
{
  int products;
  int customers;
};
bool cutomers_comp2(const day &a, const day &b)
{

  return (min(a.customers - a.products, a.products) > min(b.customers - b.products, b.products));
}
bool cutomers_comp1(const day &a, const day &b)
{

  return (min(a.customers, a.products) > min(b.customers, b.products));
}
int main()
{
  int n, k;
  cin >> n >> k;
  vector<day> arr(n);

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i].products >> arr[i].customers;
  }

  sort(arr.begin(), arr.end(), cutomers_comp2);

  /* cout<<"-----------\n";
 for(int i=0;i<n;i++)
   {
     cout<<arr[i].products<<" "<<arr[i].customers<<endl;
   } */
  long long sum = 0;
  for (int i = 0; i < k; i++)
  {
    sum += min(arr[i].products * 2, arr[i].customers);
  }

  sort(arr.begin() + k, arr.end(), cutomers_comp1);

  for (int i = k; i < n; i++)
  {
    sum += min(arr[i].products, arr[i].customers);
  }
  cout << sum;

  return 0;
}