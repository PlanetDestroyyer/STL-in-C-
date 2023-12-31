#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Priority Queue in C++" << endl;
    cout<<"Max Heap"<<endl;
    priority_queue<int> pq; // by deaful max heap
    pq.push(9);
    pq.push(10);
    pq.push(8);
    pq.push(19);
    pq.push(110);
    pq.push(18);
    cout<<"Size is "<<pq.size()<<endl;
    while (!pq.empty())
    {
        int value = pq.top();
        cout<<value<<" ";
        pq.pop();
    }
    cout<<endl<<"Size is "<<pq.size()<<endl;
    cout<<"Min Heap"<<endl;
    priority_queue<int,vector<int>,greater<int> > pq_min; // by deaful max heap
    pq_min.push(9);
    pq_min.push(10);
    pq_min.push(8);
    pq_min.push(19);
    pq_min.push(110);
    pq_min.push(18);
    cout<<"Size is "<<pq.size()<<endl;
    while (!pq_min.empty())
    {
        int value = pq_min.top();
        cout<<value<<" ";
        pq_min.pop();
    }
    cout<<endl<<"Size is "<<pq_min.size()<<endl;

    return 0;
}