#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l={10,20,40,80,10,60,40,54,78,65,10,10,604,458,20,10,40,54,458};
    l.sort();           //sort accending order
    l.unique();        //removes duplicate values but works only in sorted condition
    for(int val:l)
    {
        cout<<val<< " ";
    }
    cout<<endl;
    l.reverse();            //print reverse the list
    for(int val:l)
    {
        cout<<val<< " ";
    }
}