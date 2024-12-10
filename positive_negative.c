//To check whether the user entered number is positive or negative
#include<stdio.h>
int main(){
    int number; //initializing
    printf("Enter the number:- "); //taking the input from the user
    scanf("%d",&number);
    if(number>0){  //checking whether the number is positive or negative
        printf("%d is positive ",number);
    }
    else{
        printf("%d is negative ",number);
    }
    return 0;
}