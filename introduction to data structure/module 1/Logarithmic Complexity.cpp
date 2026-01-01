#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;              //O(1)
    cin>>n;             //O(1)
    int k=2;            //O(1)
    for(int i=1;i<n;i++)        //O(n)
    {
        cout<<i<<endl;
        i*=k;                   //O(log n)
    }
}