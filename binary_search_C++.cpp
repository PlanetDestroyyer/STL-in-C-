#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int bs(vector<int> arr, int tar){
    int low = 0;
    int high = arr.size()-1;
    int m,pos = -1;
    while (low <= high)
    {
        m = (low+high)/2;
        if(arr[m] == tar){
            pos = m;
            break;
        }else if(arr[m]>tar){
            high = m - 1;
        }
        else{
            low = m + 1;
        }
    }
    return pos;
}

int main(){
    vector <int> arr = {1,2,3,4,5,6,7,8};
    int pos = bs(arr,9);
    if(pos != -1)
        cout << "Element found at index: " << pos << endl;
    else
        cout << "Element not found" << endl;
    return 0;
}
