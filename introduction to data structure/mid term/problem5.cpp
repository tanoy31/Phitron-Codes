#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    string s;
    Node* next;
    Node* prev;
    Node(string s)
    {
        this->s=s;
        this->next=NULL;
        this->prev=NULL;
    }
};

void insert_at_tail(Node* &head,Node* &tail,string s)
{
    Node* newnode=new Node(s);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    newnode->prev=tail;
    tail->next=newnode;
    tail=newnode;
}

int check(Node* head,Node* tail,string st,int x)
{
    int idx=0;
    int count=x;
    Node* temp=head;
    while(temp!=NULL && temp->s!=st)
    {
        temp=temp->next;
        idx++;
    }
    if(temp==NULL)
    {
        cout<< "Not Available"<<endl;
        return count;
    }
    else
    {
        cout<<temp->s<<endl;
        return idx;
    }
}

int prev(Node* head,Node* tail,int idx)
{
    if (idx==0)
    {
        cout << "Not Available"<<endl;
        return idx;
    }
    Node* temp=head;
    for(int i=0;i<idx-1;i++)
    {
        temp=temp->next;
    }
    cout<<temp->s<<endl;
    return idx-1;
}

int next(Node* head,Node* tail,int idx)
{
    Node* temp=head;
    for(int i=0;i<idx;i++)
    {
        temp=temp->next;
    }
    if(temp->next==NULL)
    {
        cout<< "Not Available"<<endl;
        return idx;
    }
    else
    {
        cout<<temp->next->s<<endl;
        return idx+1;
    }
}
int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    string s;
    while(true)
    {
        cin>>s;
        if(s=="end")
        {
            break;
        }
        insert_at_tail(head,tail,s);
    }
    int n;
    cin>>n;
    int x;
    while (n--)
    {
        string s2;
        getline(cin >> ws, s2);
        if(s2[0]=='v')
        {
            string s3=s2.substr(6);
            x=check(head,tail,s3,x);
        }
        else if(s2[0]=='p')
        {
            x=prev(head,tail,x);
        }
        else
        {
            x=next(head,tail,x);
        }
    }
}