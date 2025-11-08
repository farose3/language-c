#include <stdio.h> // stdio = standart input output
#include <stdbool.h> // stdbool = standart boolean

// datatypes
// int = integer
// char(character) = "",'',("yoo")
// bool(boolean) = validate value(true,false)
// float = 3.14(decimal point)
// double = 3.145523(moare than 2 decimal point)
// null = (none)

// variable name
// 1. datatypes 2. variable name 3. value default
// int x = 10
// char fullName = "ELi";
// isYoung = false;

// function main() = it's mean the first initial of all the program in C

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

// git add . = addeade file (all of file change)

// Add:
// Edit:
// Deleted:
// Push: