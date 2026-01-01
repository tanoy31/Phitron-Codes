#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        char a[6];
        for(int i=0;i<6;i++)
        {
            cin>>a[i];
        }
        int count=0;
        for(int i=0;i<6;i++)
        {
            if(a[i]=='W')
            {
                count++;
                if(count==3)
                {
                    break;
                }
            }
            else
            {
                count=0;
            }
        }
        if(count==3)
        {
            cout<< "YES"<<endl;
        }
        else
        {
            cout<< "NO"<<endl;
        }
    }  
}