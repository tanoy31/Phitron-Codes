#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int>pq;
    pq.push(10);
    pq.push(20);
    pq.push(5);
    pq.push(8);
    pq.push(15);
    cout<<pq.top()<<endl;
    pq.push(200);
    pq.push(150);
    pq.push(300);
    cout<<pq.top()<<endl;
    pq.pop();
    pq.push(500);
    pq.pop();
    cout<<pq.top()<<endl;
}