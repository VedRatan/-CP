#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,x,a,b;
    double result;
    cin>>t;
    while(t--)
    {
        cin>>x>>a>>b;
        result=a+(100-x)*b;
        result*=10;
        cout<<result<<endl;
    }
    return 0;
}