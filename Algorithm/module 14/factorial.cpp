#include<bits/stdc++.h>
using namespace std;

long long fact(long long n)
{
    if(n==1)
        return 1;
    long long mul=fact(n-1);
    return mul*n;
}

int main()
{
    long long n;
    cin>>n;
    cout<< fact(n);
}
