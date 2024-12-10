//To check whether user entered is double digit or not
#include<stdio.h>
int main(){
    int num;
    printf("Enter the integer:- "); //asking the user input
    scanf("%d",&num);
    if(num>9 && num<=99){ //checking if the integer is double digit or not
        printf("%d is double digit",num);
    }
    else{
        printf("%d is single digit",num);
    }
    return 0;


}