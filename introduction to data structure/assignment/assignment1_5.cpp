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

void insert_at_tail(Node* &head,Node* &tail,int val)
{
    Node* newnode=new Node(val);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    tail=newnode;
}

void delete_at_any_position(Node* &head, Node* &tail, int idx)
{
    Node* temp = head;

    for(int i = 1; i < idx; i++)
    {
        temp = temp->next;
    }
    Node* deleteNode = temp->next;
    if(deleteNode->next == NULL)
    {
        temp->next = NULL;
        tail = temp;
    }
    else
    {
        temp->next=temp->next->next;
    }
    delete deleteNode;
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
    Node* head=NULL;
    Node* tail=NULL;

    int val;
    while(true)
    {
        cin>>val;
        if(val==-1)
        {
            break;
        }
        insert_at_tail(head,tail,val);
    }
    int x=0;
    for(Node* i=head;i!=NULL;i=i->next)
    {
        int y=x+1;
        Node* j=i->next;
        while(j!=NULL)
        {
            if(i->val==j->val)
            {
                delete_at_any_position(head,tail,y);
                j=i->next;
            }
            else
            {
                j=j->next;
                y++;
            }
        }
        x++;
    }
    print_linked_list(head);
}