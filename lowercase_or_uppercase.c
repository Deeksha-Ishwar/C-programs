//To find whether user entered charcter is uppercase or lowercase
#include<stdio.h>
#include<ctype.h>
int main(){
    char a;
    printf("Enter a character:- ");
    scanf("%c",&a);
    if(a==toupper(a)){
        printf("It is uppercase");
    }
    else{
        printf("It is lowercase"); 
    }    
    return 0; 
}