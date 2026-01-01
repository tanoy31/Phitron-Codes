#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    v.push_back(100);
    v.push_back(5);
    v.push_back(45);
    v.push_back(30);
    for(int x:v)
    {
        cout<<x<<endl;
    }
    v.pop_back();
    v.pop_back();
    cout<< "After pop back"<<endl;
    for(int x:v)
    {
        cout<<x<<endl;
    }
}