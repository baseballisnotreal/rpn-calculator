//
// Created by User on 3/31/2021.
//
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "stack.h"
#include "node.h"

struct node {
    double value;
    int type;
    struct node* next;
};
struct node* head = NULL;

_Bool stackEmpty( ) {
    return head == NULL;
}

void push(node* data) {
    if (stackEmpty()) {
        head = data;
    } else {
        data->next = head;
        head = data;
    }
}

void clearStack() {
    if (stackEmpty()) {
        printf("The stack is already empty \n");
    } else {
        while (head->next)
        {
            node* temp = head;
            head = head->next;
            free(temp);
        }
        free(head);
        head = NULL;
    }
}

node* pop( ) {
    if (head->next) {
        node *temp = head;
        head = head->next;
        temp->next = NULL;
        return temp;
    } else {
        if (stackEmpty()) {
            printf("There is nothing to pop \n");
            return NULL;
        } else {
            node* temp = head;
            return head;
        }
    }
}

node* peek() {
    if (!stackEmpty())
        return head;
}