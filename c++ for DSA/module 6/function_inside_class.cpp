#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    string name;
    int roll;
    int math;
    int english;
    student(string name,int roll,int math,int english)
    {
        this->name=name;
        this->roll=roll;
        this->math=math;
        this->english=english;

    }
    void marks()
    {
        cout<< "total marks of "<<name<< " = "<<math+english<<endl;
    }
};
int main()
{
    student tanoy("tanoy das gupta",20,89,98);
    tanoy.marks();
    student emu("emu chowdhury",20,80,85);
    emu.marks();
}