#include <bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
    set<string>s;
    s.insert("ABSINTH"); s.insert("BEER"); s.insert("BRANDY"); s.insert("CHAMPAGNE"); s.insert("GIN"); 
    s.insert("RUM"); s.insert("SAKE"); s.insert("TEQUILA"); s.insert("VODKA"); s.insert("WHISKEY"); s.insert("WINE");
    int n;
    cin>>n;
    string s1;
    int count=0;
    for(int i=0; i<n; i++)
    {
        cin>>s1;
        if(s.count(s1)) count+=1;
        else if(s1[0]>='0'&&s1[0]<='9'){
            if(stoi(s1)<18)
             count+=1;
        else
        continue;
        }
    }
    cout<<count<<endl;
    return 0;
}