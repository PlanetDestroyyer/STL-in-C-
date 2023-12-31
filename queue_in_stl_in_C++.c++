#include <iostream>
#include <queue>
#include <string>

using namespace std;
int main()
{
    cout << "Queues in C++" << endl;
    // first In , first Out
    queue<int> numbers;
    numbers.push(9);
    if (numbers.empty())
    {
        cout << "Queue is Empty" << endl;
    }
    else
    {
        cout << "Queue is not empty" << endl;
    }
    numbers.push(99);
    cout << numbers.size() << endl;
    cout << numbers.front() << endl;
    cout << numbers.back()<<endl;
    numbers.push(10);
    cout << numbers.size() << endl;
    cout << numbers.front() << endl;
    cout << numbers.back()<<endl;
    numbers.pop();
    cout<< numbers.size() << endl;
    return 0;
}