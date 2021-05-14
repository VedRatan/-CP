#include <iostream>
#include <set>
using namespace std;

int main()
{
    multiset<int> s;
    int n,k,sum=0,count=0;
 
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>k;
            s.insert(k);
        }
        for(auto i:s)
        sum+=i;
        int sum2=0;
        for(auto i=s.crbegin();i!=s.crend();i++)
        {
            sum2+=*i;
            sum-=*i;
            count++;
            if(sum2>sum)
            break;
        }
    cout<<count;
    return 0;
}