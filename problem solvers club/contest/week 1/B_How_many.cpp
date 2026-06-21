#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int s,t;
    cin>>s>>t;
    int count=0;
    for(int i=0;i<=s;i++)
    {
        for(int b=0;b<=s-i;b++)
        {      
            for(int c=0;c<=s-i-b;c++) 
            {
                if(i+b+c<=s && i*b*c<=t) 
                {
                    count++;   
                }
            }
        }
    }
    cout<<count;
}