#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main()
{
	unsigned long long n;
	unsigned long long t;
	cin >> n >> t;
	
	string s;
	s = to_string(t);
	while (s.length() < n)
	{
		s += "0";
	}
	if (s.length() > n)
	{
		cout << "-1";
		return 0;
	}
	cout << s;

}