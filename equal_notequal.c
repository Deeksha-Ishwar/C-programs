//To check whether the user entered two numbers are equal or not
#include<stdio.h>
int main(){
    int num1,num2;
    printf("Let's check whether the two numbers you entered are equal or not\n");
    printf("Enter the first number:- "); //taking input from the user
    scanf("%d",&num1);
    printf("Enter the second number:- ");
    scanf("%d",&num2);
    if(num1==num2){ //comparing the values
        printf("%d and %d are equal",num1,num2);
    }
    else{
        printf("%d and %d are not equal",num1,num2);
    }
    return 0;
}