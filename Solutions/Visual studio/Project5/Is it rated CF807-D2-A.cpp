#include<iostream>
using namespace std;
struct rating {
	int before= INT16_MAX, after=INT16_MAX;
};
int main()
{
	int n;
	cin >> n;
	rating* rt = new rating[n+1];
	bool sorted;
	bool x = true;
	int count = 0;
	for (int i = 1; i < n+1; i++)
	{
		cin >> rt[i].before;
		cin >> rt[i].after;
		if (rt[i-1].before < rt[i].before)
		{
			x = false;
		}
		if (rt[i-1].after < rt[i].after)
		{
			x = false;
		}
		if (rt[i].after == rt[i].before)
		{
			count++;
		}
	}
	if (!x && count==n)
	{
		cout << "unrated";
		return 0;
	}
	if (x && count==n)
	{
		cout << "maybe";
		return 0;
	}
	cout << "rated";
	return 0;
		
}