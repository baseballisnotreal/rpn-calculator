//
// Created by User on 3/31/2021.
//
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "rpn.h"
#include "stack.h"
#include "node.h"

void run1(int status){
    char expression1[ ] = {"24.2 12 / 3 / 17 +"};
    double result1 = evaluate(expression1, &status);
    printf("%.4f is the answer to first expression \n", result1);
}

void run2(int status) {
    char expression2[ ] = {"+"};
    double result2 = evaluate(expression2, &status);
    printf("%.4f is the answer to second expression \n", result2);
}

void run3(int status) {
    char expression3[ ] = {"17 22 / 4 * 16 -"};
    double result3 = evaluate(expression3, &status);
    printf("%.4f is the answer to third expression \n", result3);

}

void run4(int status){
    char expression4[ ] = {"2 8 ^ 3 /"};
    double result4 = evaluate(expression4, &status);
    printf("%.4f is the answer to fourth expression \n", result4);

}

void run5(int status) {
    char expression5[ ] = {"17 22 33 / 4 + 2"};
    double result5 = evaluate(expression5, &status);
    printf("%.4f is the answer to fifth expression \n", result5);
}

void run6(int status) {
    char expression6[ ] = {""};
    double result6 = evaluate(expression6, &status);
    printf("%.4f is the answer to sixth expression \n", result6);

}

void run7(int status) {
    char expression7[ ] = {"8 7 + 6 - 5 / 4 * 3 ^"};
    double result7 = evaluate(expression7, &status);
    printf("%.4f is the answer to seventh expression \n", result7);
}

int main() {
    int status = 0;
    run1(status);
//    run2(status);
    run3(status);
    run4(status);
    run5(status);
    run6(status);
    run7(status);
}