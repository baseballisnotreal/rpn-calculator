//
// Created by User on 3/31/2021.
//
#include <string.h>
#include <stdlib.h>
#include "rpn.h"
#include "stack.h"
#include "node.h"

struct node {
    double value;
    int type;
    struct node* next;
};

double add(double number1, double number2) {
    double result = number1+number2;
//    printf("%f + %f = %f \n", number1, number2, result);
    return result;
}

double subtract(double number1, double number2) {
    double result = number2-number1;
//    printf("%f - %f = %f \n", number1, number2, result);
    return result;
}

double multiply(double number1, double number2) {
    double result = number1*number2;
//    printf("%f * %f = %f \n", number1, number2, result);
    return result;
}

double divide(double number1, double number2) {
    double result = number2/number1;
//    printf("%f / %f = %f \n", number1, number2, result);
    return result;
}

double recursivePower(double number1, double number2) {
    if (number2 == 0) {
        return 1.0;
    } else {
        double result = recursivePower(number1, number2 - 1);
        return result * number1;
    }
}

double evaluate (char* expression, int* status) {
    double result;
    char oper[10] = "+ / * - ^ ";
    char* token = strtok(expression, " ");
    while(token != NULL) {
        if (!strstr(oper, token)) {
            node* newNode = createNode(strtod(token, NULL), NUMBER);
            push(newNode);
        } else {
            node* num1 = pop();
            node* num2 = pop();
            double number1 = num1->value;
            double number2 = num2->value;

            switch (*token)
            {
                case '+':
                    result = add(number1,number2);
                    push(createNode(result, NUMBER));
                    break;

                case '-':
                    result = subtract(number1,number2);
                    push(createNode(result, NUMBER));;
                    break;

                case '*':
                    result = multiply(number1,number2);
                    push(createNode(result, NUMBER));
                    break;

                case '/':
                    result = divide(number1,number2);
                    push(createNode(result, NUMBER));
                    break;

                case '^':
                    result = recursivePower(number2,number1);
                    push(createNode(result, NUMBER));
                    break;

                default:
                    break;
            }
        }

        token = strtok(NULL, " ");
    }
    clearStack();
    return result;
}