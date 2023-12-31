#include <iostream>
#include <vector>
using namespace std;


template <class T>
void showvector(T x){
    for (int i = 0; i < x.size(); i++)
    {
        cout<<x[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> vec1;
    int input,element;
    cout<<"Enter the Numbers of Element u want to Add"<<endl;
    cin>>element;
    for (int i = 0; i < element; i++)
    {
        cout<<"Enter the Element u want to add : ";
        cin>>input;
        vec1.push_back(input);

    }
    // for (int i = 0; i < vec1.size(); i++)
    // {
    //     cout<<vec1[i]<<" ";
    // }
    showvector(vec1);
    cout<<vec1.size();
    // cout<<vec1.resize(4);

    return 0;
}