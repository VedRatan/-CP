#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, x, y, count;
        cin >> n;
        if (n == 1)
            cout << "1" << endl;
        else
        {
            y = n - 1;
            count = 1;
            x = 2;
            while (y > 0)
            {
                if (y & 1)
                    count = count * x % mod;
                x = x * x % mod;
                y >>= 1;
            }
            cout << count << endl;
        }
    }
    return 0;
}