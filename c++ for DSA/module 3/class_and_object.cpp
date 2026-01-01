#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    char name[100];
    int roll;
    double cgpa;
};
int main()
{
    Student a;
    a.roll=1106;
    a.cgpa=3.5;
    char temp[100]="Emu Chowdhury";
    strcpy(a.name,temp);
    cout<<"Name:"<< a.name<<endl;
    cout<<"Roll:"<<a.roll<<endl;
    cout<<"CGPA:"<<a.cgpa<<endl;
}