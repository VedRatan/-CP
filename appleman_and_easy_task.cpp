#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    char a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    }
    int counter = 0, check = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            check = 0;
            if ((j + 1) < n && a[i][j + 1] == 'o')
                check++;
            if (j - 1 >= 0 && a[i][j - 1] == 'o')
                check++;
            if (i - 1 >= 0 && a[i - 1][j] == 'o')
                check++;
            if (i + 1 < n && a[i + 1][j] == 'o')
                check++;
            if (check % 2 == 0)
                counter += 1;
        }
    }
    if (counter == (n * n))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}