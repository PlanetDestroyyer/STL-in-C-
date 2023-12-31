#include <iostream>
#include <list>

using namespace std;

void display(list<int> &lst)
{
    list<int>::iterator i;
    for (i = lst.begin(); i != lst.end(); i++)
    {
        cout << *i<<" ";
    }
}

int main()
{

    list<int> l1; // creation of list
    l1.push_back(5);
    l1.push_back(569);
    l1.push_back(568);
    l1.push_back(57);
    l1.push_back(69);
    l1.push_back(8);
    l1.push_back(89);
    l1.push_back(98);
    display(l1);
    cout<<endl;
    l1.pop_back();
    l1.pop_front();
    l1.remove(5);
    cout<<l1.size()<<endl;
    l1.sort();
    cout<<endl;
    l1.reverse();
    display(l1);
    // list<int> l2(4); // list with 4 default-initialized elements
    // int input;
    // list<int>::iterator it = l2.begin(); // iterator pointing to the start of l2
    // for (int i = 0; i < l2.size(); i++)
    // {
    //     cout << "Enter the elements : ";
    //     cin >> input;
    //     *it = input; // replace the element pointed by the iterator
    //     it++;        // move the iterator to the next element
    // }
    // display(l2);
    // cout << l2.size();

    return 0;
}
