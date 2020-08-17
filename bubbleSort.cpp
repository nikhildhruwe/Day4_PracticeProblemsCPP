#include <iostream>
using namespace std;
int main (){
    int  a[] = {32, 54, 13, 21, 78, 44}, temp;
    int size = sizeof(a)/sizeof(a[0]);

    for (int i = 1; i < size; i++){
        for (int j = 0; j < size - i; j++){
            if (a[j] > a[j+1]){
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    cout << "Sorted order of numbers are : " << endl;
    for (int i = 0; i < size; i++){
        cout << a[i] << " ";
    }
}