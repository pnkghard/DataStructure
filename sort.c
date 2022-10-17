#include<stdio.h>
#include<stdlib.h>

int swap(int arr[], int min, int max) {
    arr[min] = arr[min] ^ arr[max];
    arr[max] = arr[min] ^ arr[max];
    arr[min] = arr[min] ^ arr[max];
    return arr;
}

int bubleSort(int arr[], int size, int i) {
    if(i>=size) {
        return arr;
    }
    if(arr[i]>arr[i+1]) {
        arr[size] = swap(arr, i, i+1);
    }
    return bubleSort(arr, size, i+1);
    }

int selectionSort(int arr[], int size, int min, int i) {
    if(i>=size) {
        return arr;
    }
    for
}

int main() {
    int arr[] = {1, 3, 2, 5, 4, 7};
    arr[6] = bubleSort(arr, 6, 0);

    for(int i=0; i<6; i++) {
        printf("%d->", arr[i]);
    }
}