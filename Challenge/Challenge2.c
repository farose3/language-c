#include<stdio.h>

float plusNumber(float a, float b) {
    float sum = a+b ;
    return sum;
}

float minusNumber(float a, float b) {
    float minus = a-b ;
    return minus;
}

float multiplyNumber(float a, float b) {
    float _time = a*b ;
    return _time;
}

float divideNumber(float a, float b) {
    float divide = a/b ;
    return divide;
}


// It's done


int main() {
    
    float a,b;
    float result;
    char c;
    
    printf("Please select any number : ");
    scanf("%f", &a);
    
    printf("Please selest an operator : ");
    scanf(" %c", &c);
    
    printf("Please select any number : ");
    scanf("%f", &b);
    
    if (c == '+'){
        result = plusNumber(a,b);
        printf("result : %f",result);
    }else if (c == '/'){
        result = divideNumber(a,b);
        printf("result : %f",result);
    }else if (c == '-'){
        result = minusNumber(a,b);
        printf("result : %f",result);
    }else if (c == '*'){
        result = multiplyNumber(a,b);
        printf("result : %f",result);
    }else {
        printf("re-enter your operator");
    }
    // continue the operator funtion XD
    
    return 0;
}