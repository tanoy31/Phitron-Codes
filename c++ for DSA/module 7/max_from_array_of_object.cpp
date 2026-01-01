#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    string name;
    int roll;
    int marks;
};
int main()
{
    int n;
    cin>>n;
    student a[n];
    for(int i=0;i<n;i++)
    {
        cin.ignore();
        getline(cin,a[i].name);
        cin>>a[i].roll>>a[i].marks;
    }
    student min;
    min.marks=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(a[i].marks > min.marks)
        {
            min=a[i];
        }
    }
    cout<< "highest marks obtained by "<<endl;
    cout<<"name "<<min.name<<endl;
    cout<<"roll "<<min.roll<<endl;
    cout<<"marks "<<min.marks;
}