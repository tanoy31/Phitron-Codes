#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l={10,20,40,80,10,60,40,54,78,65,10,10,604,458};
    l.remove(10);            //remove 10 from the entire list
    for(int val:l)
    {
        cout<<val<< " ";
    }
}