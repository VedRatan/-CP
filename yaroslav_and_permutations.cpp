#include <bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
    int n;
    cin>>n;
    int a[n];
    int max=1,counter=1;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=1;i<n;i++)
    {
        if(a[i-1]==a[i])
        {
            counter+=1;
            if(counter>max) max=counter;
        }
        else
        counter=1;

    }
    if(max<=(n+1)/2)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    return 0;
}