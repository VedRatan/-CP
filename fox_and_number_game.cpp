#include <iostream>
#include <cstdio>
#include <string>
#include <cmath>
#include <iomanip>
#include <ctime>
#include <climits>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <queue>
#include <vector>
#include <set>
#include <map>
using namespace std;
typedef long long ll;
const double pi = acos(-1.0);
const double e = exp(1.0);
const double eps = 1e-8;
int n, x;

int gcd(int a, int b);

int main()
{
	ios::sync_with_stdio(false);
	while (~scanf("%d", &n))
	{
		int ans=0, cnt=n;
		while (n--)
		{
			scanf("%d", &x);
			ans = gcd(ans, x);
		}
		printf("%d\n", ans*cnt);
	}
	return 0;
}

int gcd(int a, int b)
{
	return b ? gcd(b, a%b) : a;
}