#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,d;
        cin>>n>>d;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int swap=0;
        char first='s';
        for(int i=0;i<n;i++)
        {
            switch (first)
            {
                case 's':
                {
                    if(a[i]>d)
                    {
                        swap++;
                        first='l';
                    }
                    break;
                }
                case 'l':
                {
                    if(a[i]<=d)
                    {
                        swap++;
                        first='s';
                    }
                    break;
                }
            }
        }
        cout<<swap<<endl;
    }
}