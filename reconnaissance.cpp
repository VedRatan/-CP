#include <bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
    int n;
    cin>>n;
    int a[n],minn=INT_MAX;
    int first,second;
    for(int i=0;i<n;i++)
        cin>>a[i];
        for(int i=0;i<n-1;i++)
        {
            if(abs(a[i]-a[i+1])<minn)
            {
                minn = abs(a[i]-a[i+1]);
                first = i+1;second=i+2;
            }
        }
        if(abs(a[n-1]-a[0])<minn)
        {
            first=n; second =1;
        }
        cout<<first<<" "<<second<<endl;
    return 0;
}