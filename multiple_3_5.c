//To check whether the user entered number is a multiple of 3 and 5
#include<stdio.h>
int main(){
    int num;
    printf("Enter the number:- "); //asking the user input
    scanf("%d",&num);
    if(num % 3==0 && num % 5==0){  //checking if the number is multiple of 3 and 5 or not
        printf("%d is a multiple of 3 and 5\n",num);
    }
    else{
        printf("%d is not a multiple of 3 and 5",num);
    }
    return 0;
}