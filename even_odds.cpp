#include<iostream>
using namespace std;
int main()
{
	long long int n, k, result;
	cin >> n >> k;
	if (n % 2 == 0)
	{
		if (k <= n / 2)
			result = 1 + 2 * (k - 1);
		else
		{
			result = 2 + 2 * (k - n / 2 - 1);
		}
	}
	else
	{
		if (k <= (n + 1) / 2)
			result = 1 + 2 * (k - 1);
		else
		{
			result = 2 + 2 * (k - (n + 1) / 2 - 1);
		}
	}
	cout << result << endl;
}
