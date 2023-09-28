#include<iostream>
using namespace std;
#include<cmath>
#include<iomanip>
int main()
{
	cout << fixed;
	cout << setprecision(0);
	long long x, y;
	long double a;
	cin >> x>> y>> a;
	cout << ceil(x / a) * ceil(y / a);
}