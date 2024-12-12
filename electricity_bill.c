//To calculate electricity bill
//first 100 units:rs.5per unit,next 200 units:rs 7 per unit,above 300 units:rs 10 per unit
#include<stdio.h>
int main(){
    int units;
    float bill;
    printf("Enter the number of units consumed:- ");
    scanf("%d",&units);
    if(units<=100){
        bill=units*5;
    }
    else if(units<=200){
        bill=(100*5)+((units-100)*7);
    }
    else{
        bill=(100*5)+(200*7)+((units-300)*10);
    }
    printf("Total electricity bill:Rs. %.2f\n",bill);
    return 0; 
}