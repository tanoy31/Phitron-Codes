#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int val;
    Node* next;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
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
    head=newnode;
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
    else
    {
        tail->next=newnode;
        tail=newnode;
        return;
    }
}

void delete_at_head(Node* &head)
{
    Node* deleteNode=head;
    head=head->next;
    delete deleteNode;
}

void delete_at_any_position(Node* &head,Node* &tail,int idx)
{
    if(idx==0)
    {
        delete_at_head(head);
        return;
    }
    else
    {
        Node* temp=head;
        for(int i=1;i<idx;i++)
        {
            temp=temp->next;
        }
        if(temp->next->next==NULL)
        {
            Node* deleteNode=temp->next;
            temp->next=NULL;
            delete deleteNode;
            tail=temp;
        }
        else
        {
            Node* deleteNode=temp->next;
            temp->next=temp->next->next;
            delete deleteNode;
        }
    }    
}

int countNodes(Node* head)
{
    int count = 0;
    Node* temp = head;
    while(temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

void print_linked_list(Node* &head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->val<< " ";
        temp=temp->next;
    }
}

int main()
{
    int t;
    cin>>t;
    Node* head=NULL;
    Node* tail=NULL;
    while(t--)
    {
        int x,v;
        cin>>x>>v;
        if(x==0)
        {
            insert_at_head(head,tail,v);
            print_linked_list(head);
            cout<<endl;
        }
        else if(x==1)
        {
            insert_at_tail(head,tail,v);
            print_linked_list(head);
            cout<<endl;
        }
        else
        {
            int n=countNodes(head);
            if(n>v)
            {
                delete_at_any_position(head,tail,v);
            }
            print_linked_list(head);
            cout<<endl;
        }
    }
}