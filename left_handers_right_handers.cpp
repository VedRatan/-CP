#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n;
    cin>>n;
    char a[n+1];
    cin>>a;
    int j=n/2;
    for(int i=0;i<n/2;i++) {
        if(a[i]=='L'&&a[j]=='R')
        cout<<i+1<<" "<<j+1<<endl;
        else
        cout<<j+1<<" "<<i+1<<endl;
        j++;
    }
    return 0;
}