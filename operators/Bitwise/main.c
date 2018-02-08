#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter the values of a and b:");
    scanf("%d %d",&a,&b);
    c=a&b;
    printf("\nThe Binary value of %d & %d is:%d",a,b,c);
    c=a|b;
    printf("\nThe binary value of %d | %d is:%d",a,b,c);
    c=a^b;
    printf("\nThe binary value of %d ^ %d is:%d",a,b,c);
    c=~a;
    printf("\nThe binary value of ~ %d is:%d",a,c);

    printf("\nThe binary value of %d is:%d",a,(a<<2));

    printf("\nThe binary value of %d is:%d",a,(a>>2));
    return 0;
}