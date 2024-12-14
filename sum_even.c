//To find sum of all even numbers from 1 to n
#include<stdio.h>
int main(){
    int num,i=1,sum=0;
    printf("Enter a number:- ");
    scanf("%d",&num);
    while(i<=num){
      if(i % 2==0){
        sum+=i;
      }
        i++;
      
    }
printf("Sum of allll even numbers from 1 to %d is %d",num,sum);
    return 0; 
}