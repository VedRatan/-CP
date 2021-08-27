#include <bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
    int n;
    cin>>n;
    int x;
    int check=0,last1=0,last2=0;
    for(int i = 1; i <= n; i++)
        {
            cin>>x;
            if(x%2==0)
            {
                check+=1;
                last1=i;
            }
            else
            {
                check-=1;
                last2=i;
            }
        }
        if(check>0)
        cout<<last2<<endl;
        else
        cout<<last1<<endl;
  return 0;
}