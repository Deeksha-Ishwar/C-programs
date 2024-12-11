//To check if the person is eligible to vote or not based on their age
#include<stdio.h>
int main(){
    int age;
    printf("Enter your age:- "); //asking user their age
    scanf("%d",&age);
    if(age>=18){ //checking the eligiblity criteria
        printf("You are eligible to vote");
    }
    else{
        printf("You are not eligible to vote");
    }
    return 0;
}