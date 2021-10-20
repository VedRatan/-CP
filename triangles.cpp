#include <bits/stdc++.h>
using namespace std;
bool isright(int points[])
{
    int sides[3] = {0};
    sides[0] = (points[4] - points[2]) * (points[4] - points[2]) + (points[5] - points[3])* (points[5] - points[3]); 
    sides[1] = (points[4] - points[0]) * (points[4] - points[0]) + (points[5] - points[1])* (points[5] - points[1]); 
    sides[2] = (points[2] - points[0]) * (points[2] - points[0]) + (points[3] - points[1])* (points[3] - points[1]); 

    std::sort(sides, sides + 3);
    if(sides[0] > 0 && sides[2] == sides[0] + sides[1]){return 1;}
    else{return 0;}
}
int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
    int points[6];
    for(int i=0;i<6;i++)
    cin>>points[i];
    if(isright(points))
    {
        cout<<"RIGHT";
        return 0;
    }
    else
    {
        for(int k = 0; k < 6; k++){
            ++points[k];    if(isright(points)){cout<<"ALMOST"; return 0;}
            points[k] -= 2; if(isright(points)){cout<<"ALMOST"; return 0;}
            ++points[k];
    }
    }
    cout<<"NEITHER";
    return 0;
}