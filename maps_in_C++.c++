#include<iostream>
#include <map>
#include <string>
using namespace std;

int main(){
    cout<<"Maps in C++"<<endl;
    map <string ,int> marks;
    marks["Pranav"] = 80;
    marks["Mohan"] = 60;
    marks["Random"] = 70;
    map <string ,int> :: iterator itr;
    for (itr = marks.begin();itr!=marks.end(); itr++)
    {
        cout<<(*itr).first<<" "<<(*itr).second<<endl;
    }
    
}