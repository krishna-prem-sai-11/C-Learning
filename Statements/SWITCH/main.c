//used to excute the code for multiple  conditions


#include<stdio.h>

int main(){
    int ch;
    printf("Enter your choice should be b/w 1 and 5");
    scanf("%d",&ch);
    switch(ch){
        case 1:printf("\nyour choice is %d",ch);
        break;
        case 2:printf("\nyour choice is %d",ch);
        break;
        case 3:printf("\nyour choice is %d",ch);
        break;
        case 4:printf("\nyour choice is %d",ch);
        break;
        case 5:printf("\nyour choice is %d",ch);
        break;
        default:printf("\nYour choice is wrong choice");
    }
    return 0;
}