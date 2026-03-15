#include<bits/stdc++.h>
using namespace std;

long long fibo(long long n)
{
    if(n<2)
        return n;
    if(n==1)
        return 1;
    return fibo(n-1)+fibo(n-2);
}

int main()
{
    long long n;
    cin>>n;
    cout<< fibo(n);
}
