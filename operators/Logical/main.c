//LOGICAL OPERATORS

#include<stdio.h>
int main(){
    int a,b,c,logical;
    printf("\nEnter the values of a, b and c");
    scanf("%d %d %d",&a,&b,&c);
    logical=(a>b) && (c!=b);
    printf("\nLogical using && is:%d",logical);
    logical=(a==c) || (c==b);
    printf("\nLogical using || is:%d",logical);//Remeber the variations:-)
    logical=!(a==b);
    printf("\nLogical using ! is:%d",logical);
    logical=!(((a!=b) && (c<=b)) || ((a>b) && (a>=b)));
    printf("\nLogical using ! , || and && is:%d",logical);
    return 0;
}
