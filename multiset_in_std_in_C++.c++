#include <iostream>
#include <set>
using namespace std;

int main()
{
    multiset<int> s1;

    s1.insert(2);
    s1.insert(22);
    s1.insert(223);
    s1.insert(22);
    s1.insert(23);
    s1.insert(22);
    multiset<int>::iterator itr;
    for (itr = s1.begin(); itr != s1.end(); itr++)
    {
        cout << *itr << " ";
    }
    cout << endl
         << "Size of set is : " << s1.size() << endl;
    s1.erase(s1.find(22));
    for (itr = s1.begin(); itr != s1.end(); itr++)
    {
        cout << *itr << " ";
    }
    cout << endl
         << "Size of set is : " << s1.size() << endl;
    
}