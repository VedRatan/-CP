#include <bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(0);    int mi=INT_MAX, ma=0, ri, ra, cnti=0, cnta=0;
    char s[5][105];
    for(int i=0; i<4; i++) scanf("%s", s[i]);
    for(int i=0; i<4; i++) {
        if(strlen(s[i])-2<mi) mi=strlen(s[i])-2, ri=i;
    }
    for(int i=0; i<4; i++) if(mi<=(strlen(s[i])-2)/2) cnti++;
    for(int i=0; i<4; i++) {
        if(strlen(s[i])-2>ma) ma=strlen(s[i])-2, ra=i;
    }
    for(int i=0; i<4; i++) if(ma>=(strlen(s[i])-2)*2) cnta++;
    if(cnti>=3 && cnta>=3) printf("%c", s[2][0]); 
    else if(cnti>=3) printf("%c", s[ri][0]);
    else if(cnta>=3) printf("%c", s[ra][0]);
    else printf("%c", s[2][0]);
    return 0;
}