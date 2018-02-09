//NESTED IF

#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter the value of a and b:");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b){
        if(a>c){
            printf("\nThe value of a > c");
        }
        else{
            printf("\nThe value of a > b only");
        }
    }
    else{
        printf("\nThe Value of a !> b");
    }
}