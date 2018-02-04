/*ARITHMETIC OPERATORS*/

#include <stdio.h>

 int main(){
     int a,b,sum,sub,multi,div,rem;
     printf("Enter the values of a and b\n");/*Prints the values of a and b*/
     scanf("%d%d",&a,&b);/*Reads the value of a and b*/
     sum=a+b;
     /*SUM OF TWO NUMBERS*/
     printf("\n sum of %d and %d is:%d\t",a,b,sum);
     sub=a-b;
     /*Sub of two numbers*/
     printf("\nsub of %d and %d is:%d",a,b,sub);
     multi=a*b;
     /*Multi of two numbers*/
     printf("\n multi of %d and %d is:%d",a,b,multi);
     div=a/b;
     /*Division of two numbers*/
     printf("\n div of %d and %d is:%d",a,b,div);
     rem=a%b;
     printf("\n Reminder when %d divied by %d is:%d",a,b,rem);/*Modulo division*/
     /*exit the program with zero status*/
     return 0;
 }