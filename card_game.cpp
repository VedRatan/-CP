#include <bits/stdc++.h>
using namespace std;
int findindex(char c[],char key,int length)
{
    for(int i=0;i<length;i++)
    {
        if(c[i]==key) return i;
    }
}
int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
    char tramp,tramp1, tramp2,rank1,rank2;
    char rank[]={'6','7','8','9','T','J','Q','K','A'};
    cin>>tramp;
    cin>>rank1>>tramp1>>rank2>>tramp2;
     if(tramp1==tramp && tramp1==tramp2)
    {
        if(findindex(rank,rank1,9)>findindex(rank,rank2,9))
        cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
     else if(tramp==tramp1)
    cout<<"YES"<<endl;
    else if (tramp1==tramp2)
    {
        if(findindex(rank,rank1,9)>findindex(rank,rank2,9))
        cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    else cout<<"NO"<<endl;
        return 0;
}