// To check whether the month number is valid month number or an invalid month number
#include<stdio.h>
int main(){
    int month_num;
    printf("Enter the month:- "); //asking th user to enter the month number
    scanf("%d",&month_num);
    if(month_num>=1 && month_num<=12){ //checking whether the entered month number is valid or invalid
        printf("%d is a valid month number",month_num);
    }
    else{
        printf("%d is an invalid month number",month_num);
    }
    return 0;
}