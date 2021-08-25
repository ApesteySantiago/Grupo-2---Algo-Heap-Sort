//
// Created by Santiago on 23/08/2021.
//
#include <stdio.h>
#include "helper.h"

/* Driver program to test above functions */
int main()
{
    int arr[] = {4,48,37,15,26};
    int size = sizeof(arr)/sizeof(arr[0]);

    heapSort(arr, size);

    printf("\nSorted array is \n");
    printArray(arr, size);
    return 0;
}


//La complejidad algorítmica representa la cantidad de recursos (temporales) que necesita un algoritmo para resolver un problema
// y por tanto permite determinar la eficiencia de dicho algoritmo.