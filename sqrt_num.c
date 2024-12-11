//To check if the user entered number is perfect square or not
#include<stdio.h>
#include<math.h>
int main(){
    int num,sqrt_num;
    //asking the user input
    printf("Enter the number:- ");
    scanf("%d",&num);
    // finding the square root of the number
    sqrt_num=sqrt(num);
    //checking if the number is perfect square or not
    if(sqrt_num * sqrt_num==num){
        printf("%d is a perfect square",num);
    }
    else{
        printf("%d is  not a perfect square",num);
    }
    return 0;
}