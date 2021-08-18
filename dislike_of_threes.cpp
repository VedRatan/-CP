#include <bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
    int t,k;
    int counter;
    cin>>t;
    while(t--) {
        cin>>k;
        counter=0;
        for(int i=1;;i++)
        {
            if(i%3==0 || i%10==3)
            continue;
            else
            {
                counter++;
                if(counter==k)
                {
                    cout<<i<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}