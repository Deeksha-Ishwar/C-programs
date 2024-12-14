//To check whether the user entered number is prime number or not
#include<stdio.h>
#include<stdbool.h> 
int main(){
    int num,i;
    int isPrime=true; //assuming user entered number is a prime number
    printf("Enter the num:- ");
    scanf("%d",&num);
    if(num<1){
        printf("Please enter the number which is greater than 1");
    }
    else if(num==1){
        printf("1 is neither a prime nor composite number");
    }
    else{
        for(i=2;i<num;i++){
            if(num % i==0){
                isPrime=false;
                break;
            }
        }
    }
if(isPrime){
        printf("%d is a prime num",num);
    }
else{
        printf("%d is not a prime num",num);
    }

    
    return 0; 
}