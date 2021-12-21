#include <bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
    int t;
    cin>>t;
    while(t--) {
        long long  int n,sum=0;
        cin>>n;
        sum+=(long long int) sqrt(n);
        sum+=(long long int) cbrt(n);
        sum-=(long long int)sqrt((long long int) cbrt(n));
        cout<<sum<<endl;
    }
    return 0;
}