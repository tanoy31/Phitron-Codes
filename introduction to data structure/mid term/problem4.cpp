#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};

void insert_at_head(Node* &head,Node* &tail,int val)
{
    Node* newnode=new Node(val);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    newnode->next=head;
    head->prev=newnode;
    head=newnode;
}

void print_forward(Node* head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->val<< " ";
        temp=temp->next;
    }
}

void print_reverse(Node* tail)
{
    Node* temp=tail;
    while(temp!=NULL)
    {
        cout<<temp->val<< " ";
        temp=temp->prev;
    }
}
void insert_at_tail(Node* &head,Node* &tail,int val)
{
    Node* newnode=new Node(val);
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

int count(Node* head)
{
    int count=-1;
    Node* temp=head;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    return count;
}

void insert_at_any_position(Node* &head,int idx,int val)
{
    Node* newnode=new Node(val);
    Node* temp=head;
    for(int i=1;i<idx;i++)
    {
        temp=temp->next;
    }
    newnode->next=temp->next;
    temp->next->prev=newnode;
    temp->next=newnode;
    newnode->prev=temp;
}

int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    
    int n;
    cin>>n;
    while(n--)
    {
        int val,idx;
        cin>>idx>>val;
        if(idx==0)
        {
            insert_at_head(head,tail,val);
            cout<< "L -> ";
            print_forward(head);
            cout<<endl;
            cout<< "R -> ";
            print_reverse(tail);
            cout<<endl;
        }
        else
        {
            int x=count(head);
            if(idx<=x+1)
            {
                if(x+1==idx)
                {
                    insert_at_tail(head,tail,val);
                    cout<< "L -> ";
                    print_forward(head);
                    cout<<endl;
                    cout<< "R -> ";
                    print_reverse(tail);
                    cout<<endl;
                }
                else
                {
                    insert_at_any_position(head,idx,val);
                    cout<< "L -> ";
                    print_forward(head);
                    cout<<endl;
                    cout<< "R -> ";
                    print_reverse(tail);
                    cout<<endl;
                }
            }
            else
            {
                cout<< "Invalid"<<endl;
            }
        }
    }
}