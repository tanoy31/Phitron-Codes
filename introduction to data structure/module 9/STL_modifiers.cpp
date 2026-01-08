#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>l={1,2,3,4,5};
    l.push_back(10);        //insert at tail
    l.push_front(100);          //insert at head
    for(int val:l)
    {
        cout<<val<< " ";
    }
    cout<<endl;
    l.pop_back();           //delete at tail
    l.pop_front();              //delete at head
    for(int val:l)
    {
        cout<<val<< " ";
    }
}   