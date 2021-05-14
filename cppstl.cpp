#include <bits/stdc++.h>
using namespace std;
bool f(int x, int y) //comparative function used to arrange the elements of the vectorin decreasing order
{
    return x > y;
}
void vector_demo()
{
    vector<int> A = {11, 2, 3, 14};
    sort(A.begin(), A.end(),f); // O(NlogN)
    bool present = binary_search(A.begin(), A.end(), 3);
    A.push_back(100);
    present = binary_search(A.begin(), A.end(), 100);
    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    A.push_back(123);
    vector<int>::iterator it = lower_bound(A.begin(), A.end(), 100);  //returns the iterator to the first element which is >=100
    vector<int>::iterator it1 = upper_bound(A.begin(), A.end(), 100); //returns the iterator to the first element which is >100
    cout << *it << " " << *it1 << endl;
    cout << it1 - it << endl;    //ouput=5
    sort(A.begin(), A.end(), f); //arrange the vector in decreasing order
    for (int i = 0; i < A.size(); i++)
        cout << A[i] << " ";
    //or we can iterate like below too
    for (int x : A)
    {
        x++;
        cout << x << " "; // since we are referencing each and every elements so any change in x will be reflected back to the original element
    }
    cout << endl;
    for (int &x : A)
    {
        x++; // since we are referencing each and every elements so any change in x will be reflected back to the original element
        cout << x << " ";
    }
}
void set_demo()
{
    set<int> s;
    s.insert(1);   // all this is happening in log(n) time since set is automatically sorting each and every element as soon as we insert it
    s.insert(2);   // all this is happening in log(n) time since set is automatically sorting each and every element as soon as we insert it
    s.insert(-1);  // all this is happening in log(n) time since set is automatically sorting each and every element as soon as we insert it
    s.insert(-10); // set is maintaining a ascending order by default and removes duplicate elements
    for (int x : s)
        cout << x << " ";
    cout << endl;
    auto it = s.find(-1); // this function will basically return a iterator pointing to the specified element and if the element is not present it will return s.end();
    if (it == s.end())
        cout << "not present" << endl;
    else
    {
        cout << "its present ";
        cout << *it << endl;
    }
    auto it1 = s.upper_bound(1); // no need to enter s.begin(), s.end() as set is already sorted so simply enter the elemet only
    auto it2 = s.lower_bound(1); // no need to enter s.begin(), s.end() as set is already sorted so simply enter the elemet only
    if (it1 == s.end() || it2 == s.end())
        cout << "oops! can't find anything" << endl;
    else
    {
        cout << "upper bound value of 1 is " << *it1 << endl;
        cout << "lower bound value of 1 is " << *it2 << endl;
    }
}
void map_demo()
{
    map<int, int> a;
    a[1] = 100;
    a[2] = -1;
    a[3] = 4;
    a[1000021] = 100;
    map<char, int> count;
    string s = "ved ratan";
    for (char c : s)
        count[c]++;
    cout << count['a'] << " " << count['v'] << endl;
}
class Person
{
public:
    float age;
    string name;
    bool operator<(Person rhs) const { return age < rhs.age; }
    bool operator>(Person rhs) const { return age > rhs.age; }
};
void multiset_demo()
{
    multiset<Person, greater<>> mset = {{25, "rishi"}, {20, "rupesh"}};
    for(auto x:mset)
    cout<<x.age<<" "<<x.name<<endl;
}
void multimap_demo()
{
    multimap<char,int> m;
    m.insert(make_pair('a',1));
    m.insert(make_pair('b',2));
    m.insert(make_pair('b',3));
    m.insert(make_pair('a',4));
    m.insert(make_pair('c',5));
    m.insert(make_pair('d',6));
    m.insert(make_pair('d',7));
    m.insert(make_pair('e',8));
    // for(auto i:m)
    // {
    //     cout<<i.first<<" "<<i.second<<endl;
    // }
    auto range=m.equal_range('a');
    for(auto i=range.first;i!=range.second;i++)
    cout<<i->first<<" "<<i->second<<endl;
    cout<<"the count of a is: "<<m.count('a')<<endl;
    auto pair=m.find('a'); 
    cout<<pair->first<<" "<<pair->second; //prints random pair if there exist more than one pair consisiting of 'a' 
}
void powerofstl()
{
    // to find the interval of a given key in given intervals [10,20] [30,400] [401,500]
    set<pair<int, int>> s; // we can have pair of int, char pair of char, char and so on...
                           // the order in case of pair is decided according to the following criteria
                           // if {a,b} and {c,d} are two pairs then if a<c the first pair is smaller and if a==c then comparison is done between b and d
    s.insert({2, 3});
    s.insert({10, 20});
    s.insert({30, 400});
    s.insert({401, 500});
    int point = 201;
    auto it = s.upper_bound({point, INT_MAX});
    if (it == s.begin())
    {
        cout << "the given point is not lying in any inteval";
        return;
    }
    it--;
    pair<int, int> current = *it;
    if (current.first <= point && point <= current.second)
    {
        cout << "yes it is present in the interval " << current.first << " " << current.second << endl;
    }
    else
        cout << "the given point is not lying in any interval" << endl;
}
int main()
{
   vector_demo();
    return 0;
}