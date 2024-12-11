#include <stdio.h>
int main()
{
int sub1,sub2,sub3,sub4,total;
float avg;
printf("Enter marks of the subjects (out of 100): ");
scanf("%d %d %d %d", &sub1,&sub2,&sub3,&sub4);
total=sub1+sub2+sub3+sub4;
avg=total/4;
printf("%.1f\n",avg);
if(avg<100)
{ 
    if (sub1>35,sub2>35,sub3>35,sub4>35){
if(avg>90)
{
printf("Grade:A");
}
else if(avg>80)
{
printf("Grade:B");
}
else if(avg>70)
{
printf("Grade:C");
}
else if(avg>60)
{
printf("Grade:D");
}
else if(avg>50)
{
printf("Grade:E");
}
else if(avg>30)
{
printf("passs better luck next time");
}
else
{
printf("Fail");
}
}
}
return 0;
}