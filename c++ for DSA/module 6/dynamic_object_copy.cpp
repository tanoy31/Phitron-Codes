#include<bits/stdc++.h>
using namespace std;
class cricketer
{
    public:
    string country;
    int jersey;
    cricketer(string country,int jersey)
    {
        this->country=country;
        this->jersey=jersey;
    }
};
int main()
{
    cricketer* dhoni=new cricketer("india",07);
    cricketer* kohli=new cricketer("india",18);
    *kohli=*dhoni;
    delete dhoni;
    cout<<kohli->country<< " "<<kohli->jersey<<endl;
}