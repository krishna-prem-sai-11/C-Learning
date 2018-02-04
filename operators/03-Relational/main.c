//RELATION OPERATORS (Which are useful in decision macking and loops)

//==, >, <, !=, <=, >=.

#include<stdio.h>
    
int main(){
    int a,b;
    printf("Enter the values of a and b\n"); /*This checks the relation b/w two operands. If it is true it returns "1" ,
                                                     If it is False it returns "0"*/
    scanf("%d %d",&a,&b);
    a==b;
    printf("\nHere %d is equal to %d:%d",a,b,a==b);
    a>b;
    printf("\nHere %d > %d:%d",a,b,a>b);
    a<b;
    printf("\nHere %d < %d:%d",a,b,a<b);
    a!=b;
    printf("\nHere %d != %d:%d",a,b,a!=b);
    a<=b;
    printf("\nHere %d <= %d:%d",a,b,a<=b);
    a>=b;
    printf("\nHere %d >= %d:%d",a,b,a>=b);
    return 0;
}//:-)