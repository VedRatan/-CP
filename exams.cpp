#include <bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
    int n,k;
    cin>>n>>k;
    int sum=0,sum1=0,twos=0;
    if( k <= (n * 3))
    {
        cout<<(n*3)-k<<endl;
    }
    else
    cout<<"0"<<endl;
    return 0;
}