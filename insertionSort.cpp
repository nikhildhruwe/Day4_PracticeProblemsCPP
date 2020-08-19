#include <iostream>
using namespace std;

void display(int *, int);
void insertionSort(int *a, int size){
    int temp;
     for (int i = 1; i < size; i++){
        temp = a[i];
        int j = i -1;
        while ( j>=0 && a[j] > temp){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = temp;
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