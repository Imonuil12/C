#include <stdio.h>

int main() {

    char grade = 'A';

    switch (grade) {
        case 'A': 
        printf("You did great! ");
        break;

        case 'B': 
        printf("You did alright! ");
        break;

        case 'C': 
        printf("You did bad! ");
        break;

        case 'D': 
        printf("You did really bad! ");
        break;

        case 'F': 
        printf("You failed! ");

        default : 
        printf(" Invalid Grade");
    }
    
}