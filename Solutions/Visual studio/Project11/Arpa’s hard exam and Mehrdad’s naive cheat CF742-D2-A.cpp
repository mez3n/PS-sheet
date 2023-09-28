#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int x = n % 4;
	if (n == 0)
	{
		cout << "1";
		return 0;
	}
	if (x == 0)
	{
		cout << "6" << endl;
	}
	if (x == 1)
	{
		cout << "8" << endl;
	}
	if (x == 2)
	{
		cout << "4" << endl;
	}
	if (x == 3)
	{
		cout << "2" << endl;
	}
}