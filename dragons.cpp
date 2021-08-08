#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int counter,s,n;
    pair<int, int>dragon[1000];
    while(cin>>s>>n)
    {
        counter=1;
        for(int i=0;i<n;i++)
        {
            cin>>dragon[i].first>>dragon[i].second;

        }
        sort(dragon,dragon+n);
         for(int i=0;i<n;i++)
         {
             if(s<=dragon[i].first)
             {
                 counter=0;
                 break;
             }
             else
             {
                 s=s+dragon[i].second;
             }
         }
         if(counter==0)
            cout<<"NO\n";
         else
            cout<<"YES\n";
    }
    return 0;
}