#include<stdio.h>

// Loop ()
// 1. while
// 2. for
// 3. do...while

// while Loop (know about circle a function **if a conditional it's TRUE)
// for loop (know about circle a function)
// do...while loop ()

// x = 9 || 10 

// Symbol logic
// || = or (+)
// && = and (*)

int main() {
    
    int i = 0;
    int j;
    
    // while (conditional) {block code function}
    
    while (i <= 5) {
         printf("%d\n", i);
         // i++ means +1
         i++;
    }
    
    
    // /*
    //     for(expression 1; expression 2; expression 3) {
            
    //     }
    // */
    
    for (j = 1; j < 10; j++) {
        printf("%d\n", j);
    }
    
    do {
        printf("%d\n", i);
        i++;
    } while (i > 11);

    return 0;
}