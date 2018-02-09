//IF-ELSE-IF LADDER

#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter the value of a, b, and c:");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b){
        printf("\nThe value of a>b ");//Here the first condition is printed first because it is excuted first.
    }
    else
    if(a>c){
        printf("\nThe value  of a>c");//if above condition is false then this condition is excuted
    }
    else
    if(b>c){
        printf("\nThe value of b>c");//if both above conditions is false then this condition is excuted
    }
    else{
        printf("\nThe value of a<b<c");//if all the above conditions is false then this condition is excuted
    }
    return 0;
}