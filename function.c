#include <stdio.h>

// int main() = A initialized function of program
// {} = all function will only work in the range of this. function operating
// () = function

// how to create a function in C
// 1. data types 2. named of a function 3. {}

// How to create a function with parameter | arguments
int plusNumber(int a, int b) {
    int sum = a+b;
    return sum;
}

char copyFunction() {
    printf("Copy Function\n");
    return 0;
}

int main() {
    int a, b;
    int result;
    
    printf("Please select number between 1-9, with 2 parameter: ");
    scanf("%d", &a);
    
    printf("Please select number between 1-9, with 2 parameter: ");
    scanf("%d", &b);
    
    result = plusNumber(a, b);
    printf("result:%d", result);
    
    return 0;
}
