//
// Created by User on 3/31/2021.
//

#ifndef PS4_STACK_H
#define PS4_STACK_H
typedef struct node node;
_Bool stackEmpty();
void push(node*);	 	     // Push a node onto the stack
void clearStack();    // function that resets the stack to empty
node* pop( );	 	 // Pop the top of the stack
node* peek( );	 	 // Return a reference to the node on top of the stack
#endif //PS4_STACK_H
