//
// Created by User on 3/31/2021.
//
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "node.h"
#include "stack.h"

struct node {
    double value;
    int type;
    struct node* next;
};

node* createNode(double value, int type) {
    struct node* result = NULL;
    result = (struct node*) malloc( sizeof(node));
    result->value = value;
    result->next = NULL;
    return result;
}