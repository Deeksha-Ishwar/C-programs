//To check if an inputed number is divisible by 4 or 6 or both
#include<stdio.h>
int main(){
    int num;
    printf("Enter the number:- ");
    scanf("%d",&num);
    if(num % 4==0){
        if(num % 6==0){
            printf("%d is divisible by both 4 and 6 ",num);
        }
        else {
            printf("%d is divisible by 4",num);
        }
     }
     else if(num % 6==0){
        printf("%d is divisible by 6",num);
     }
     else{
        printf("%d is divisible by neither of them",num);
     }
    return 0; 
}