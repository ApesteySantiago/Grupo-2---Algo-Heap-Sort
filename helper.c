//
// Created by Santiago on 23/08/2021.
//

#include <malloc.h>
#include <stdio.h>
#include "helper.h"

struct Node *newNode(int value){

    size_t sizeNode = sizeof(struct Node);    //Solicito memoria
    struct Node *node = (struct Node *) malloc(sizeNode);

    node->value = value;    // Asigno el dato e inicio hojas
    node->left = node ->right = NULL;
    return node;
}

void insert(struct Node *node, int value){

    if (value > node->value){       //ingreso mayores derecha y si hay espacio a la derecha

        if (node->right == NULL){

            node->right = newNode(value);

        } else {            // si esta ocupado el lugar, recursivo

            insert(node->right, value);

        }
    } else {
        if (node->left == NULL){        // lo mismo pero a la izquierda

            node->left = newNode(value);

        } else {                // si esta ocupado el lugar, recursivo

            insert(node->left, value);

        }
    }
}

void preorder(struct Node *node){   // despues se le cambia el nombre pero aca se tiene que mostrar el Arbol y realizar  el llamado de otra funcion para el ordenamiento
    int array[6];
    int i = 0;
    if(node != NULL){

        for (; i < 6; i++){        // ordena bien el array pero lo realiza 6 veces jeje ahora lo estoy viendo pero tiro Push para ustedes

            array[i] = node->value;
            preorder(node->left);           // El problema esta aca porque llamo y me limpia el array y el i
            preorder(node ->right);


        }
    }
}