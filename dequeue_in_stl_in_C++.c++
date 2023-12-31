#include <iostream>
#include <deque>
#include <string>

using namespace std;
int main()
{
    cout << "Deque in C++" << endl;
    deque<int> d;
    d.push_back(14);
    d.push_back(31);
    d.push_back(14);
    d.push_back(13);
    d.push_back(3);
    cout << "Deque Size is : " << d.size() << endl;
    deque<int>::iterator itr;
    for (itr = d.begin(); itr != d.end(); itr++)
    {
        cout << *itr << endl;
    }
    d.push_front(873);
    d.push_front(87);
    cout << "Deque Size is : " << d.size() << endl;
    for (itr = d.begin(); itr != d.end(); itr++)
    {
        cout << *itr << endl;
    }
    d.pop_back();
    d.pop_front();
    cout << "Deque Size is : " << d.size() << endl;
    cout<<d.at(4)<<endl;
    return 0;
}