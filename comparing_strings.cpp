#include <bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
    string s1,s2;
    cin>>s1>>s2;
    int count1=0,count2=0;
    if(abs(s1.length()-s2.length())>0)
    cout<<"NO"<<endl;
     else
        {
            count1 = 0;
            count2 = 0;
            char a,b;
            for (int i=0; i<s1.length(); i++)
            {
                if (s1[i] != s2[i])
                {
                    ++count1;

                    if (count1 == 1)
                    {
                        a = s1[i];
                        b = s2[i];
                    }
                    else if (count1 == 2)
                    {
                        if (s1[i] == b && s2[i] == a)
                            count2 = 1;
                    }
                    else
                        break;
                }
            }

            if (count2 == 1 && count1 == 2)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    return 0;
}