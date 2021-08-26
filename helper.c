//
// Created by Santiago on 23/08/2021.
//


#include <malloc.h>
#include <stdio.h>
#include "helper.h"

void maxHeapify(struct MaxHeap* maxHeap, int root)
{
    int largest = root;                                                         // Inizializo a largest con la raiz
    int left = (root << 1) + 1;                                                 // se acomoda -> left = 2 * root + 1
    int right = (root + 1) << 1;                                                // se acomoda -> right = 2 * root + 2

                                                                                // Se pregunta si el hijo izquierdo de la raiz existe y es mayor que la raiz
    if (left < maxHeap->size && maxHeap->array[left] > maxHeap->array[largest])
        largest = left;

                                                                                // Se pregunta si el hijo de la raiz existe y si es mayor que el mas grande hasta ahora
    if (right < maxHeap->size && maxHeap->array[right] > maxHeap->array[largest])
        largest = right;

                                                                                // Se cambia la raiz si es necesario, y se llama a la recursividad para acomodar los elementos
    if (largest != root)
    {
        swap(&maxHeap->array[largest], &maxHeap->array[root]);
        maxHeapify(maxHeap, largest);
    }
}

void swap(int* a, int* b){                                                      // Funcion para cambiar entre elementos
    int t = *a; *a = *b;  *b = t;
}

struct MaxHeap* createAndBuildHeap(int *array, int size)
{
    int i;
    struct MaxHeap* maxHeap =
            (struct MaxHeap*) malloc(sizeof(struct MaxHeap));
    maxHeap->size = size;                                                       // Se inicializa el tamanio del monticulo (Heap)
    maxHeap->array = array;                                                     // Se asigna la direccion del primer elemento del arreglo

                                                                                // Comienza desde el nodo interno mas bajo y mas a la derecha y se apila
                                                                                // todos los nodos internos de abajo hacia arriba
    for (i = (maxHeap->size - 2) / 2; i >= 0; --i)
        maxHeapify(maxHeap, i);
    return maxHeap;
}

void heapSort(int* array, int size)
{
                                                                                // Se crea el monticulo con los datos ingrasados
    struct MaxHeap* maxHeap = createAndBuildHeap(array, size);

                                                                                // El while repite mientras el tamanio del monticulo sea mayor que 1
                                                                                // El ultimo elemento maximo del monton sera el ultimo elemento
    while (maxHeap->size > 1)
    {
                                                                                // El elemento mas grande del Heap se almacena en la raiz. Se pide que se reemplaze
                                                                                // con el ultimo elemento del monton y que luego reduzca el tamanio del monton en 1
        swap(&maxHeap->array[0], &maxHeap->array[maxHeap->size - 1]);
        --maxHeap->size;                                                        // Aca se reduce el tamanio del monton

                                                                                // Se apila la raiz del arbol llamando a maxHeapify
        maxHeapify(maxHeap, 0);
    }
}

void printArray(int* arr, int size)
{
    int i;
    for (i = 0; i < size; ++i)
        printf("%d ", arr[i]);
}

