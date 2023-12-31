#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s1;
    // sets are o ́types ordered and unorded
    // ordered set
    // contains unique elements
    // Implemented using balanced BST
    // elemers are in sorted order
    // random access is not possible i.e u cannot gte ith element in O(1)
    s1.insert(2);
    s1.insert(22);
    s1.insert(223);
    set <int> :: iterator itr;
    for(itr = s1.begin();itr != s1.end();itr++){
        cout<<*itr<<" ";
    }
    cout<<endl<<"Size of set is : "<<s1.size()<<endl;
    s1.erase(2);
    cout<<endl<<"Size of set is : "<<s1.size()<<endl;
    //insertion : O(LogN)
    //Deletion : O(LogN)

}