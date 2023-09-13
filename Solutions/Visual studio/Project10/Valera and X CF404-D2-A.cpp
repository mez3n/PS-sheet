#include<iostream>
using namespace std;
int main()
{
	string s;
	int n;
	cin >> n;
	string s1;
	for (int i = 0; i < n; i++)
	{
		cin >> s1;
		s += s1;
	}
	char diagonal = s[0];
	char side = s[1];
	if (diagonal == side)
	{
		cout << "NO";
		return 0;
	}
	for (int i = 0; i < n * n; i++)
	{
		if (i % (n + 1) == 0|| i % (n - 1) == 0)
		{
			if (diagonal != s[i])
			{
				cout << "NO";
				return 0;
			}
		}
		else
		{
			if (side != s[i])
			{
				cout << "NO";
				return 0;
			}
		}
	}
	cout << "YES";
	return 0;
}