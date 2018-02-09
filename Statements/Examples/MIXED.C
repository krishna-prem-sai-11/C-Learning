//Mixed examples of statements

#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter the value of a, b and c");
    scanf("%d %d %d",&a,&b,&c);
    if((a>b)&&(a>c)){
        if(b>c){
            printf("\nb is greater than c");
        }
        else{
            printf("\na>c>b");
        }
    }
    else
    if((c>b)&&(c>a)){
        if(b>a){
            printf("\nThe value of b > a");
        }
        else{
            printf("\nc>a>b");
        }
    }
    else{
        printf("\nThe value of b is greater");
    }
}