//
// Created by Santiago on 23/08/2021.
//

#ifndef GRUPO_2___ALGO_HEAP_SORT_HELPER_H
#define GRUPO_2___ALGO_HEAP_SORT_HELPER_H

struct MaxHeap
{
    int size;
    int* array;
};

void swap(int* a, int* b);
void heapSort(int* array, int size);
void printArray(int* arr, int size);

#endif //GRUPO_2___ALGO_HEAP_SORT_HELPER_H
