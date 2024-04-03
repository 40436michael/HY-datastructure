/*
5
Original array:
4 7 2 11 3
Pass 0
2 7 4 11 3
Pass 1
2 3 4 11 7
Pass 2
2 3 4 11 7
Pass 3
2 3 4 7 11
Sorted array:
2 3 4 7 11
*/
#include<bits/stdc++.h>
using namespace std;

void selection_sort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n-1 ; i++) {
        int minIndex = i;
        for (int j =     i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            swap(arr[i], arr[minIndex]);
        }
        cout<<"Pass "<<i<<endl;
        for(auto num:arr){
            cout << num << " ";
        }
        cout<<endl;
    }
}

int main() {
    vector<int> arr = {4, 7, 2, 11, 3};// 可更改這一行
    cout<<arr.size()<<endl;
    cout << "Original array:" << endl;
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    selection_sort(arr);

    cout << "Sorted array:" << endl;
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}