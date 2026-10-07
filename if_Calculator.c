#include <stdio.h>

int main(void){

    int num1, num2;
    char oprtr;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);
    
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &oprtr);

    if(oprtr == '+'){
        printf(" Answer is = %d\n", num1 + num2);
    }
    else if(oprtr == '-'){
        printf(" Answer is = %d\n", num1 - num2);
    }
    else if(oprtr == '/'){
        printf(" Answer is = %d\n", num1 / num2);
    }
    if(oprtr == '*'){
        printf(" Answer is = %d\n", num1 * num2);
    }
    else
        printf("invalid operator\n");


    return 0;
}
