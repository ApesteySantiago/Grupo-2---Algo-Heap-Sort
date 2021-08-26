//
// Created by Santiago on 23/08/2021.
//
#include <stdio.h>
#include "helper.h"


int main()
{
    //int arr[] = {37,4,26,15,48};
    //int arr[] = {15,4,37,48,26};
    //int arr[] = {48,37,26,4,15};
    int arr[] = {4,48,37,15,26};
    int size = sizeof(arr)/sizeof(arr[0]);

    heapSort(arr, size);

    printf("\nEl arreglo ordenado es: \n");
    printArray(arr, size);
    return 0;
}