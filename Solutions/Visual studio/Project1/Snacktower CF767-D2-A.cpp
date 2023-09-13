#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	bool* arr = new bool [n + 1] {false};
	int index;
	int last=n+1;
	while (cin >> index)
	{
		arr[index] = true;
		if (index == last - 1)
		{
			cout << index<<" ";
			arr[index] = false;
			last = index;
			for (int i = index - 1; i > 0; i--)
			{
				if (arr[i] == true)
				{
					cout << i << " ";
					arr[i] = false;
					last = i;
				}
				else
				{
					cout << endl;
					break;
				}
			}
		}
		else
		{
			cout << endl;
		}
		
		
		                           
	}
	

}