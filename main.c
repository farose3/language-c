#include <stdio.h> // stdio = standart input output
#include <stdbool.h> // stdbool = standart boolean


int main() {
    // conditional statement
    // 1. if (conditon) {
    //  function
    // }
    
    int x = 10;
    if (x <= 20) {
        // function print() it's means info of what do you need to print 
        printf("x is less than 20\n");
    }
    // 2. if...else
    // if (condition) {
    //  function
    // }
    if (x == 20) {
        printf("x is equ 20\n");
    }else {
        printf("x is less than 20\n");
    }
    // 3. if...else if
    /*
        if (condition) {
            function if comdition is TRUE
        } else if (condition 2nd) {
            funtion if condition is TRUE
        } else if (condition 3rd) {
            funtion if condition is TRUE
        }
    */
    if (x > 20) {
        printf("x is greater than 20\n");
    } else if (x == 20) {
        printf("x is equal to 20\n") ;
    } else if (x < 20) {
        printf("x is lower than 20\n") ;
    }
    // 4. if...else if...else
    /*
        if (condition) {
            function if comdition is TRUE
        } else if (condition 2nd) {
            funtion if condition is TRUE
        } else if (condition 3rd) {
            funtion if condition is TRUE
        } else {
            // if not TRUE in every conditional
            // function
    */
    
    if (x == 20) {
        printf("x is equal to 20\n");
    } else if (x > 20) {
        printf("x is greater than 20\n") ;
    } else {
        printf("x is not equal or less than 20\n") ;
    }
        
    return 0;
}