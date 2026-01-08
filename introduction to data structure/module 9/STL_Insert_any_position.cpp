#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>l={1,2,3,4,5,6};
    cout<<*next(l.begin(),2);       //2nd index e jabe. * diye value print
    cout<<endl;
    l.insert(next(l.begin(),3),100);         //3 no index e 100 insert krbe
    for(int val:l)
    {
        cout<<val<< " ";
    }
    cout<<endl;
    list<int>l2={10,20,30,40,50};
    l2.insert(next(l2.begin(),3),l.begin(),l.end());      //insert l list in l2 list
    for(int val:l2)
    {
        cout<<val<< " ";
    }
}