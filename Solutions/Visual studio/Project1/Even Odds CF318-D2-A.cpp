#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	unsigned long long n;
	cin >> n;
	unsigned long long target;
	cin >> target;
	std::cout << fixed;
	std::cout << setprecision(0);
	if (target <= ceil(n / 2.0))
	{
		cout << target * 2 - 1 << " "; // odd
	}
	else
	{
		cout << ((target - ceil(n / 2.0)) * 2) << " ";  //even
	}


}