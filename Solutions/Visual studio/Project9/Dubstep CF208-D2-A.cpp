#include<iostream>
#include<vector>
using namespace std;
int main()
{
	string s;
	string result;
	cin >> s;
	cout << s.length();
	bool space = false;
	for (int i = 0; i < s.length(); i++)
	{
		if (i == 51)
		{
			int hi=8;
		}
		if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
		{
			i += 2;
			if (space)
			{
				result += " ";
				space = false;
			}
		}
		else
		{
			result += s[i];
			space = true;
		}
	}
	cout << result;

}
