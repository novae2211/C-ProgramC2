#include <stdio.h>

int main(void){

    int num1, num2;
    char oprtr;

    printf("enter first number:");
    scanf("%d", &num1);

    printf("enter second number:");
    scanf("%d", &num2);

    printf("enter operator :");
    scanf(" %c", &oprtr);

    switch (oprtr){
        case '+':
            printf("Answer is = %d\n", num1 + num2);
            break;
        case '-':
            printf("Answer is = %d\n", num1 - num2);
            break;
        case '/':
            printf("Answer is = %d\n", num1 / num2);
            break;
        case '*':
            printf("Answer is = %d\n", num1 * num2);
            break;
           
        default:
            printf("invalid operator");
            break;    
    
    }
    return 0;
}
