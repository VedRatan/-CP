#include <iostream>
#include <conio.h>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int a[s.length()] = {0};
    for (int i = 0; i < s.length(); i++)
    {

        if (s.at(i) != '+')
            a[i] = s[i] - '0';
    }
    sort(a,a+s.length());
    int j=0;
    while(a[j]==0)j++;
    cout<<a[j];
    for (int i = j+1; i < s.length(); i++)
    {
        if(a[i]==0)
        continue;
        cout<<"+"<<a[i];
    }
}
