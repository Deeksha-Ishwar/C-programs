//sum of first natural numbers n
#include<stdio.h>
int main(){
    int num,i,sum=0; 
    printf("Enter the number:- ");
    scanf("%d",&num);
    if(num<=0){
        printf("Please enter positive number");
    }
    else{
    for(i=1;i<=num;i++){
        sum+=i;
        
    }
    printf("Sum of first %d natural numbers is: %d",num,sum);
    }
    return 0; 
}