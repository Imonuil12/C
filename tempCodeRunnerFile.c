#include <stdio.h>
/*
int factorial(int i){
    if(i <= 1){
        return 1;
    }
    return i * factorial (i-1);
}
int main(){
    int i = 4;
    printf("Factorial of %d is %d\n", i, factorial(i));

    return 0;
}

#include <stdlib.h>

int main(){
    int dividend = 20;
    int divisor = 2;
    int quotient;
    if ( divisor == 0){
        fprintf(stderr, "Division by zero! Exiting ... \n");
        exit(-1);
    }
    quotient = dividend / divisor;
    fprintf(stderr, "Value of quotient : %d\n", quotient);
    exit(0);
}
*/

#include <errno.h>

int main(){
    FILE * fp;

    fp = fopen("test.txt", "r");

    printf("Value of errno: %d\n", errno);
    return 0;
}