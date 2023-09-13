#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	bool prime = false;
	int count = 0;
	for (int i = 0; i <= 10000; i++)
	{
		
		for (int j = 2; j <= ceil(sqrt(i)); j++)
		{
			if (i == 2)
			{
				prime = true;
				break;
			}
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
			prime = false;
			cout << i << endl;
			count++;
		}
	}
	cout << count;
}