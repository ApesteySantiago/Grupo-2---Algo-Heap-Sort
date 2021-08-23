//
// Created by Santiago on 23/08/2021.
//

#include <stdio.h>
#include "helper.h"


int main(){

    struct Node *root = newNode(28);
    insert(root, 11);
    insert(root, 9);
    insert(root, 20);
    insert(root, 30);
    insert(root, 5);
    insert(root, 26);

    printf("\nPrint tree\n");
    preorder(root);

}