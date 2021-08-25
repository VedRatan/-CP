#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    map<int, int> m;
    cin >> t;
    int n, value;
    while (t--)
    {
        int result = 0;
        int j = 0, n;
        cin >> n;
        int m[n];
        for (int i = 0; i < n; i++)
        {
            cin >> m[i];
        }
        if (is_sorted(m, m + n))
            cout << "0" << endl;
        else
        {
            while (true)
            {
                if (j == n - 1 || j == n)
                {
                    result += 1;
                    if (is_sorted(m, m + n))
                        break;
                    if (result % 2 == 0)
                        j = 0;
                    else
                        j = 1;
                }
                if (m[j] > m[j + 1])
                {
                    int temp = m[j];
                    m[j] = m[j + 1];
                    m[j + 1] = temp;
                }
                j += 2;
            }
            cout << result << endl;
        }
    }
    return 0;
}