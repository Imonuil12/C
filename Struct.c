#include <stdio.h>


void displayString ( char str[]){
    printf("String Output: ");
    puts(str);
}   
int main(){
    char str[50];
    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);
    displayString(str);
    return 0;
}

//String and Pointers
int main(void){
    char name[]="Harry Potter";
    printf("%c", *name);
    printf("%c", *(name+1));
    printf("%c", *(name+8));

}
//end of the code

