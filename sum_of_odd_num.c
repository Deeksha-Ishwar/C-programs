//sum of first n odd numbers
#include<stdio.h>
int main(){
    int num,i,sum=0;
    printf("Enter a positive number:- ");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        if(i % 2 !=0){
            sum+=i;
            printf("%d",i);
        }
    }
    printf("The sum of first %d natural odd numbers: %d",num,sum);
    
    
    return 0; 
}