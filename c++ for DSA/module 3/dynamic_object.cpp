#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    int cls;
    int roll;
    double cgpa;
    Student(int cls,int roll,double cgpa)
    {
        this->cls=cls;
        this->roll=roll;
        this->cgpa=cgpa;
    }
};
int main()
{
    Student a(12,23,5.00);
    Student *b=new Student(12,25,4.87);
    cout<<"Class:"<< a.cls<<endl;
    cout<<"Roll:"<<a.roll<<endl;
    cout<<"CGPA:"<<a.cgpa<<endl;
    cout<<"Class:"<< b->cls<<endl;
    cout<<"Roll:"<<b->roll<<endl;
    cout<<"CGPA:"<<b->cgpa<<endl;
}