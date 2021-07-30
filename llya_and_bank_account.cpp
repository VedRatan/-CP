#include <bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
    long long int n;
    int tens=10;
    int max=INT_MIN;
    cin>>n;
    if(n>0)
    cout<<n;
    else
    {
      if((n/tens)>max)
        max=(n/tens);
        tens*=10;
      if(((n/tens)*10)+(n%10)>max)
        max=((n/tens)*10)+(n%10);
        cout<<max<<endl;
    }
    return 0;
}