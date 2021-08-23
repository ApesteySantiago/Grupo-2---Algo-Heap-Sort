//
// Created by Santiago on 23/08/2021.
//

#ifndef GRUPO_2___ALGO_HEAP_SORT_HELPER_H
#define GRUPO_2___ALGO_HEAP_SORT_HELPER_H


struct Node {       // Estructura del arbol
    int value;
    struct Node *left;
    struct Node *right;
} Heap;

struct Node *newNode(int value);
void insert(struct Node *node, int value);
void preorder(struct Node *node);

#endif //GRUPO_2___ALGO_HEAP_SORT_HELPER_H
