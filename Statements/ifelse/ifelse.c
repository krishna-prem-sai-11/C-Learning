 #include<stdio.h>

 int main(){
     int a;
     printf("Enter the value of a:");
     scanf("%d",&a);
     if(a%2==0)
     {
         printf("\nThe %d value is an even number",a);
     }
     else
     {
         printf("\nThe %d value is not an even number",a);
     }
     return 0;
}