//ASSIGNMENT OPERATORS (=,+=,-=,*=,/=,%=)

#include<stdio.h>


int main(){
    int a,b;
    printf("Enter the value of a");
    scanf("%d",&a);
    b = a;//Here "a" value is assign to "b" value which makes b=a if you take a=b you will meet garbage value:-)
    printf(" The value of b is:%d\n",b);
    b+=a;//b=b+a
    printf("\nThe value of b is:%d",b);
    b-=a;
    printf("\nThe value of b is:%d",b);//b=b-a
    b*=a;
    printf("\n The value of b is:%d",b);
    b/=a;//b=b*a
    printf("\n The value of b is:%d",b);
    b%=a;//b=b%a(The remainder of b/a)
    printf("\n The value of b is:%d",b);
    return 0;
}