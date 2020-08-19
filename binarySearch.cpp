#include <iostream>
using namespace std;

int binarySearch (int *a, int size, int data){
    int left = 0, right = size - 1, mid;

    while (left < right){
        mid = (left + right) / 2;
        if (data == a[mid])
            return mid;
        else if ( data < a[mid])
            right = mid - 1;
        else
            left = mid + 1;
    }
    return -1;
}

int main(){
    int  a[] = {32, 54, 13, 21, 78, 44}, data, index;
    int size = sizeof(a) / sizeof(a[0]);

    cout << "Enter element to search: ";
    cin >> data;

    index = binarySearch(a, size, data);
    if (index == -1)
        cout << "Given data not found" << endl;
    else
        cout << "Given data found at index : " << index << endl;
}