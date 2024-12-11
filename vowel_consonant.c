//To check if a character is vowel or consonant
#include<stdio.h>
#include<ctype.h>
int main(){
    char ch;
    char lower_alpha;
    printf("Enter a alphabhet:- "); //input a character
    scanf("%c",&ch);
    lower_alpha=tolower(ch); //converting the letter into lowercase
    //checking if the entered character is alphabhet or not
    if(isalpha(ch)){
        if(lower_alpha=='a' || lower_alpha=='e' || lower_alpha=='i' || lower_alpha=='o' || lower_alpha=='u'){
            printf("%c is vowel",ch);
        }
        else{
            printf("%c is consonant",ch);
        }
    }
    else{
        printf("please enter the letter");
    }
    return 0;
}