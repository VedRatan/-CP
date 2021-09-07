#include <bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int pointsa=max((3*a)/10,(a-((a/250)*c)));
    int pointsb=max((3*b)/10,(b-((b/250)*d)));
    if(pointsa==pointsb)
    cout<<"Tie"<<endl;
    else if(pointsa>pointsb)
    cout<<"Misha"<<endl;
    else
    cout<<"Vasya"<<endl;
    return 0;
}