#include <iostream>
using namespace std;

void display(int *a, int size){
    cout << "Sorted order of numbers are : " << endl;
    for (int i = 0; i < size; i++){
        cout << a[i] << " ";
    }
}
void merge(int *a, int lower, int mid, int upper){
    int i, j, k;
    int b[upper];
    i = lower;
    j = mid + 1;
    k = lower;

    while (i <= mid && j <= upper){
        if ( a[i] <= a[j]){
            b[k] = a[i];
            i++;
        }
        else
        {
            b[k] = a[j];
            j++; 
        }
        k++;
    }
    if (i > mid){
        while ( j <= upper){
            b[k] = a[j];
            k++;
            j++;
        }
    }
    else
    {
        while(i <= mid){
            b[k] = a[i];
            k++;
            i++;
        }
    }
    for (int i = lower; i <= upper; i++){
        a[i] = b[i];
    }
}

void mergeSort(int *a, int lower, int upper){
    if (lower < upper){
        int mid = (lower + upper) / 2;
        mergeSort(a, lower, mid);
        mergeSort(a, mid + 1, upper);
        merge(a, lower, mid, upper);
    }
}
int main (){
    int  a[] = {32, 54, 13, 21, 78, 44, 1, 21}, temp;
    int size = sizeof(a) / sizeof(a[0]);

    mergeSort(a, 0, size - 1);
    display(a, size);
}