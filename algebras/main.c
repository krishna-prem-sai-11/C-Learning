#include <stdio.h>

 int main(){
     int a,b,sum,sub,multi,div;
     printf("Enter the values of a and b\n");
     scanf("%d%d",&a,&b);
     sum=a+b;
     printf("\n sum of %d and %d is:%d\t",a,b,sum);
     sub=a-b;
     printf("\nsub of %d and %d is:%d",a,b,sub);
     multi=a*b;
     printf("\n multi of %d and %d is:%d",a,b,multi);
     div=a/b;
     printf("\n div of %d and %d is:%d",a,b,div);
     return 0;
 }