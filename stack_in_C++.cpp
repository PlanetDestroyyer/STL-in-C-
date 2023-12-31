#include <bits/stdc++.h>
using namespace std;

int main(){
    stack <int> st1;
    //Last In First Out
    st1.push(3);
    st1.push(23);
    st1.push(21);
    st1.push(56);
    cout<<"Size : "<<st1.size()<<endl;
    while (!st1.empty())
    {
        int value = st1.top();
        cout<<value<<" ";
        st1.pop();
    }
    
    
    
}