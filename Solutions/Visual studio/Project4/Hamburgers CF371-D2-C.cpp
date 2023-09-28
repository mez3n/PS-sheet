#include<iostream>
using namespace std;
int main()
{
	string s;
	cin >> s;
	int nb, ns, nc;
	int pb, ps, pc;
	cin >> nb >> ns >> nc >> pb >> ps >> pc;
	int money;
	cin >> money;
	int count = 0;
	while (true)
	{
		for (int i = 0; i < s.length(); i++)
		{
			if (s[i] == 'B')
			{
				if (nb > 0)
				{
					nb--;
				}
				else
				{
					if (money >= 0)
					{
						money -= pb;
					}
				}
			}

			if (s[i] == 'S')
			{
				if (ns > 0)
				{
					ns--;
				}
				else
				{
					if (money >= 0)
					{
						money -= ps;
					}
				}
			}

			if (s[i] == 'C')
			{
				if (nc > 0)
				{
					nb--;
				}
				else
				{
					if (money >= 0)
					{
						money -= pc;
					}
				}
			}
		}
			if (money >= 0)
			{
				count++;
			}
			else
			{
				break;
			}
		
	
		
	}
	cout << count;
}