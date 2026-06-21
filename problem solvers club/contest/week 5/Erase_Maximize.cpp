#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--)
    {
        int n,s;
        cin>>n>>s;
        int k=max(0,s-5*n);
        cout <<6*n -k<<endl;
    }
}