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

class mystack
{
    public:
        Node* head=NULL;
        Node* tail=NULL;
        int sz=0;

        void push(int val)
        {
            sz++;
            Node* newnode=new Node(val);
            if(head==NULL)
            {
                head=newnode;
                tail=newnode;
                return;
            }
            tail->next=newnode;
            newnode->prev=tail;
            tail=newnode;
        }
        void pop()
        {
            sz--;
            Node* deletenode=tail;
            tail=tail->prev;
            delete deletenode;
            if(tail==NULL)
            {
                head=NULL;
                return;
            }
            tail->next=NULL;
        }
        int top()
        {
            return tail->val;
        }
        int size()
        {
            return sz;
        }
        bool empty()
        {
            if(head==NULL)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
};

class Myqueue
{
    public:
    Node* head=NULL;
    Node* tail=NULL;
    int sz=0;
    void push(int val)
    {
        sz++;
        Node* newnode=new Node(val);
        if(head==NULL)
        {
            head=newnode;
            tail=newnode;
            return;
        }
        tail->next=newnode;
        newnode->prev=tail;
        tail=newnode;
    }
    void pop()
    {
        sz--;
        Node* deletenode=head;
        head=head->next;
        delete deletenode;
        if(head==NULL)
        {
            tail=NULL;
            return;
        }
        head->prev=NULL;
    }
    int front()
    {
        return head->val;
    }
    int back()
    {
        return tail->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        if(head==NULL)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    int n,m;
    cin>>n>>m;
    mystack st;
    Myqueue qe;
    if(n!=m)
    {
        cout<< "NO";
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            st.push(x);
        }
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            qe.push(x);
        }
        int f=0;
        for(int i=0;i<n;i++)
        {
            int a=st.top();
            int b=qe.front();
            if(a!=b)
            {
                f++;
                break;
            }
            st.pop();
            qe.pop();
        }
        if(f==0)
        {
            cout<< "YES";
        }
        else
        {
            cout<< "NO";
        }
    }
}