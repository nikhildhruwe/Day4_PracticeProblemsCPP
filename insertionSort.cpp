#include <iostream>
using namespace std;

void display(int *, int);
void insertionSort(int *a, int size){
    int temp;
     for (int i = 1; i < size; i++){
        for (int j = 0; j < size - i; j++){
            if (a[j] > a[j+1]){
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    display(a, size);
}

void display(int *a, int size){
    cout << "Sorted order of numbers are : " << endl;
    for (int i = 0; i < size; i++){
        cout << a[i] << " ";
    }
}
int main (){
    int  a[] = {32, 54, 13, 21, 78, 44}, temp;
    int size = sizeof(a)/sizeof(a[0]);

    insertionSort(a, size);
}