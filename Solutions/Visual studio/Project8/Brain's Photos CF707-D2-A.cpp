#include<iostream>
#include<vector>
using namespace std;
int main()
{
	bool colored = false;
	char c;
	int x, y;
	cin >> x >> y;
	while (cin >> c)
	{
		if (c != 'B' && c != 'W'&& c!='G')
		{
			colored = true;
		}
	}
	if (colored)
	{
		cout << "#Color";
		return 0;
	}
	cout << "#Black&White";
}