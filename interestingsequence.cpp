#include <bits/stdc++.h>
using namespace std;
long gcd(int a, int b)
{
    if(b==0) return a;
    return gcd(b,a%b);
}
int main()
{
    long t,k;
    cin>>t;
    while(t--)
    {
        cin>>k;
        long first=k+1;
        long sum=0;
        for(long i=2;i<=2*k+1;i++)
        {
            sum=sum+gcd(first,(k+i*i));
            first=k+i*i;
        }
        cout<<sum<<endl;
        sum=0;
    }
    return 0;
}