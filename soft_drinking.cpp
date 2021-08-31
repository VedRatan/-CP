#include <bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
    int n,k,l,c,p,d,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int result=min(min(k * l / nl, c * d), p / np) / n ;
    cout<<result<<endl;
    return 0;
}