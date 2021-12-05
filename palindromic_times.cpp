#include <bits/stdc++.h>
using namespace std;
int reverse(string n)
{
    string newnum="";
    for(int i=n.length()-1;i>=0;i--)
    newnum+=n[i];
    return stoi(newnum);
}
int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
    string time;
    cin>>time;
    int hours=0,minutes=0;
    hours+=(time[0]-'0')*10+(time[1]-'0');
    minutes+=(time[3]-'0')*10+(time[4]-'0');
    if(hours==23 && minutes>reverse(time.substr(0,2)))
    cout<<"00:00"<<endl;
    else if(hours==23 && minutes<reverse(time.substr(0,2)))
    cout<<hours<<":"<<reverse(time.substr(0,2));
    else if(hours>=0&&hours<=5&&minutes<reverse(time.substr(0,2)))
    {
        cout<<"0"<<hours<<":"<<hours<<"0"<<endl;
    }
    else if(hours==0&&minutes==0)
    cout<<"01:10";
    else if(hours>=0&&hours<=4&&minutes>reverse(time.substr(0,2)))
    {
        cout<<"0"<<hours+1<<":"<<hours+1<<"0"<<endl;
    }
    else if(hours>=5&&hours<10)
    {
        cout<<"10:01"<<endl;
    }
    else if((hours>=15&&hours<20)||(hours==20&&minutes<2))
    {
        cout<<"20:02";
    }
    else if(minutes<reverse(time.substr(0,2)))
    {
        cout<<hours<<":"<<reverse(time.substr(0,2))<<endl;
    }
    else
    {
        int minn=0,newminn;
        newminn=stoi(time.substr(0,2));
        newminn+=1;
        cout<<hours+1<<":";
        cout<<reverse(to_string(newminn))<<endl;;
    }
    return 0;
}