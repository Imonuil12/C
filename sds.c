#include <stdio.h>
#include <math.h>
/*
int main(){
    double num1;
    double num2;
    char op;

printf("Enter a number: ");
scanf("%lf", &num1);

printf("Enter an operator: ");
scanf(" %c", &op);

printf("Enter the second number: ");
scanf("%lf", &num2);

if(op == '+'){
    printf("%f", num1+num2);
}else if (op == '-'){
    printf("%f", num1-num2);
}else if (op == '*'){
    printf("%f", num1*num2);
}else if (op == '/'){
    printf("%f", num1/num2);
}else{
    printf(" Invalid operator");
}
    return 0;
}




#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a, b;
    float c, d;
    
    scanf("%d %d", &a, &b);
    scanf("Enter the floats:%f %f", &c, &d);

    printf("%d %d \n%.1f %.1f", a + b, a-b, c+d, c-d);

    return 0;
}
*/
#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

    int max_of_four(int a,int b,int c,int d){   
    if (a>b && a>c && a>d) return a;
    else if (b>c && b>d) return b;
    else if( c>d) return c;
    else return d;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
/*

}*/