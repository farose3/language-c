#include<stdio.h>

int main() {
    
    int i;
    // switch case
    /*
        switch (condition variable) {
            funtion
        }
    */
    
    // switch case = check variable to compare with constant a value (integer, character)
    // if...else = check a complex condition and check a lot of variable
    for(i = 1;i<= 10;i++) {
        switch (i % 2) {
            case 0:
                printf("%d even\n", i);
                break;
            case 1:
                printf("%d odd\n", i);
                break;
        }
        
        
    }
    return 0;
}