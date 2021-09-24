#include <bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
    long n,digit;
    cin>>n;
    if(n==0)
    cout<<"O-|-OOOO"<<endl;
    for(int i=n;i>0;i/=10)
    {
        digit=i%10;
        if(digit == 0)
            cout<<"O-|-OOOO"<<endl;
        else if(digit==1)
        cout<<"O-|O-OOO"<<endl;
        else if(digit==2)
        cout<<"O-|OO-OO"<<endl;
        else if(digit==3)
        cout<<"O-|OOO-O"<<endl;
        else if(digit==4)
        cout<<"O-|OOOO-"<<endl;
        else if(digit==5)
        cout<<"-O|-OOOO"<<endl;
        else if(digit==6)
        cout<<"-O|O-OOO"<<endl;
        else if(digit==7)
        cout<<"-O|OO-OO"<<endl;
        else if(digit==8)
        cout<<"-O|OOO-O"<<endl;
        else
        cout<<"-O|OOOO-"<<endl;
    }
    return 0;
}