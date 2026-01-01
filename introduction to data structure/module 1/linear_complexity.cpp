#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;                  //O(1)
    cin>>n;                 //O(1)
    for(int i=1;i<=n;i++)
    {
        cout<<i<< " ";       //O(n)
    }
    cout<<endl;
    for(int i=1;i<n;i+=2)
    {
        cout<<i<< " ";       //O(n)
    }
}