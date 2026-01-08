#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l(10,3);      //10 size ,each 3
    for(auto it=l.begin();it!=l.end();it++)
    {
        cout<<*it<< " ";        //print 3 for 10 times
    }
    cout<<endl;
    list<int> l2;               //empty,size 0
    cout<<l.size()<<endl;
    cout<<l2.size()<<endl;
    list<int>l3(10,20);
    for(int val:l3)             //another way to print
    {
        cout<<val<< " ";
    }
    cout<<endl;
    list<int> l4={1,2,3,4,5};
    list<int>l5(l4);        //taking all l4 value to l5
    for(int val:l4)             
    {
        cout<<val<< " ";
    }
    cout<<endl;
    int a[]={5,4,3,2,1};
    list<int>l6(a,a+5);             //also we can copy an array to list
    for(int val:l6)             
    {
        cout<<val<< " ";
    }
    cout<<endl;
    vector<int>v={10,20,30,40};
    list<int>l7(v.begin(),v.end());         //it also copies vector 
    for(int val:l7)             
    {
        cout<<val<< " ";
    }

}