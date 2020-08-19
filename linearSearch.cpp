#include <iostream>
using namespace std;

void linearSearch(int *a, int size, int number){
    int i;
    for (i = 0; i < size; i++){
        if (a[i] == number){
            cout << "Element found at index : " << i << endl;
            break;
        }
    }

    if ( i == size)
        cout <<  "Element not found" << endl;
    return;
}

int main (){
    int  a[] = {32, 54, 13, 21, 78, 44}, number;
    int size = sizeof(a)/sizeof(a[0]);

    cout << "Enter element to search: ";
    cin >> number;
    linearSearch(a, size, number);
}