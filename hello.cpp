#include <bits/stdc++.h>
using namespace std;
  
int main()
{
    vector<int> g1;
    set<int> s1;
    s1.insert(10);
    s1.insert(25);
    s1.insert(85);
    s1.insert(8);
    for (int i = 1; i <= 10; i++)
        g1.push_back(i * 10);
    for(auto i=g1.begin(); i != g1.end(); i++)
    cout<<*i<<" ";
    cout << "\nReference operator [g] : g1[2] = " << g1[2];
  
    cout << "\nat : g1.at(4) = " << g1.at(4);
  
    cout << "\nfront() : g1.front() = " << g1.front();
  
    cout << "\nback() : g1.back() = " << g1.back();
  
    // pointer to the first element
    int* pos = g1.data();
  
    cout << "\nThe first element is " << *pos;
    return 0;
}