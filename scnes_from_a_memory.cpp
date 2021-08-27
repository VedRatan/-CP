#include <bits/stdc++.h>
using namespace std;
bool isPrime(long long int x){
   if(x == 2) return false;
   for(int i = 2; i <= x/2; ++i)
      if(x%i==0) return false;
   return true;

}
void check()
{
    string s;
    int k,n;
    cin>>k>>s;
    for(int i=0;i<k;i++)
    {
        if((s[i]-'0')!=2&&(s[i]-'0')!=3&&(s[i]-'0')!=5&&(s[i]-'0')!=7)
        {
            cout<<"1"<<endl<<s[i]<<endl;
            return;
        }
    }
    for(int i=0;i<k;i++)
    {
        for(int j=i+1;j<k;j++)
        {
            n=s[i]-'0';
            n*=10;
            n+=(s[j]-'0');
            if(isPrime(n)==false){
                cout<<"2"<<endl<<n<<endl;
                break;}
        }
        if(isPrime(n)==false)
        break;
    }
}
int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
    int t,result;
    long long int n;
    cin>>t;
    while(t--)
    {
        check();
    }
    return 0;
}