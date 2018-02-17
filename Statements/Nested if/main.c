//NESTED IF

#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter the value of a, b and c:");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b){
        printf("\nThe value of a is greater then b");
        if(a>c){
            printf("\nThe value of a > c");
        }
        else{
            printf("\nThe value of c > a");
        }
    }
    else{
        printf("\nThe Value of a !> b");
    }
    return 0;
}