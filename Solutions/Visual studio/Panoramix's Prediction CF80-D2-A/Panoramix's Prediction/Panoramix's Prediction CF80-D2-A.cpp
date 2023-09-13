#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n1;
	int n2;
	cin >> n1;
	cin >> n2;
	bool prime = false;
	for (int i = n1 + 1; i < n2; i++)
	{
		for (int j = 2; j <=ceil( sqrt(i)); j++)
		{
			if (i % j == 0)
			{
				prime = false;
				break;
			}
			else
			{
				prime = true;
			}
		}
		if (prime)
		{
			cout << "NO";
			return 0;
		}
	}
	for (int i = 2; i <= sqrt(n2); i++)
	{
		if (n2 % i == 0)
		{
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";

}