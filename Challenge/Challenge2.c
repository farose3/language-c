#include<stdio.h>

int plusNumber(int a, int b) {
    int sum = a+b ;
    return sum;
}

int minusNumber(int a, int b) {
    int minus = a-b ;
    return minus;
}

int multiplyNumber(int a, int b) {
    int _time = a*b ;
    return _time;
}

int divideNumber(int a, int b) {
    int divide = a/b ;
    return divide;
}


int main() {
    
    int a,b;
    int result;
    int c;
    
    printf("Please select any number : ");
    scanf("%d", &a);
    
    printf("Please selest an operator : ");
    scanf("%d", &c);
    
    printf("Please select any number : ");
    scanf("%d", &b);
    
    if (c == 3) {
        result = plusNumber(a,b);
        printf("result : %d",result);
    }else {
        printf("re-enter your operator");
    }
    // continue the operator funtion XD
    
    return 0;
}
