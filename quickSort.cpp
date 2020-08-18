#include <iostream>
using namespace std;

void display(int *a, int size){
    cout << "Sorted order of numbers are : " << endl;
    for (int i = 0; i < size; i++){
        cout << a[i] << " ";
    }
}

int partition(int *a, int start, int end){
    int pivot ,temp, partitionIndex;
    pivot = a[start];
    partitionIndex = start;
    while ( start < end){
        while (a[start] <= pivot){
            start++;
        }

        while(a[end] > pivot){
            end--;
        }
        
        if (start < end){
            swap(a[start], a[end]);
        }
    }
    swap(a[partitionIndex], a[end]);
    return end;
}

void quickSort(int *a, int start, int end){
    if (start < end ){
       int  partitionIndex = partition(a, start, end);
            quickSort(a,start, partitionIndex - 1 );
            quickSort(a, partitionIndex + 1, end);  
    }
}
int main (){
    int  a[] = {32, 54, 13, 21, 78, 44, 1, 21}, temp;
    int size = sizeof(a)/sizeof(a[0]);

    quickSort(a, 0, size - 1);
    display(a, size);
}