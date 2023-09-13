#include<string>
#include<iostream>
#include<vector>
using namespace std;
struct team
{
	int count=1;
	string name;
};
int main()
{
	int n;
	cin >> n;
	vector <team> teams;
	bool newteam = true;
	string s;
	for (int j = 0; j < n; j++)
	{
		cin >> s;
		newteam = true;
		for (int i = 0; i < teams.size(); i++)
		{
			if (s == teams[i].name)
			{
				teams[i].count++;
				newteam = false;
				break;
			}
		}
		if (newteam)
		{
			team t1;
			t1.name = s;
			teams.push_back(t1);
		}
	}

	
	int max = 0;
	int max_count = 0;
	for (int i = 0; i < teams.size(); i++)
	{
		if (teams[i].count > max_count)
		{
			max = i;
			max_count = teams[i].count;
		}
	}
	cout << teams[max].name;
}