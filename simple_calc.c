//Simple calculator using switch statement
#include<stdio.h>
#include<math.h>
int main(){
    char operator;
    float num1;
    float num2;
    float result;
    printf("Enter the operator(+ - * /):- ");
    scanf("%c",&operator);
    printf("Enter the first number:- ");
    scanf("%f",&num1);
    printf("Enter the second number:- ");
    scanf("%f",&num2);
    switch(operator){
        case '+':
                result=num1 + num2;
                printf("result: %.1f",result);
                break;
        case '-':
                result=num1 - num2;
                printf("result: %.1f",result);  
                break;  
        case '*':
                result=num1 * num2;
                printf("result: %.1f",result);
                break;
        case '/':
                result=num1 / num2;
                printf("result: %.1f",result); 
                break;  
        default:
            printf("%c is not valid",operator);
    }
    return 0; 
}