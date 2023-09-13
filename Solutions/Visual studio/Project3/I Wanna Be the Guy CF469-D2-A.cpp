#include<iostream>
using namespace std;
int main()
{
	int  n;
	cin >> n;
	bool* arr = new bool [n+1] {false};
	int num1;
	cin >> num1;
	int x;
	for (int i = 0; i < num1; i++)
	{
		cin >> x;
		arr[x] = true;
	}
	cin >> num1;
	for (int i = 0; i < num1; i++)
	{
		cin >> x;
		arr[x] = true;
	}
	for (int i = 1; i < n+1; i++)
	{
		if (arr[i] == false)
		{
			cout << "Oh, my keyboard!";
			return 0;
		}
	}
	cout << "I become the guy.";

}